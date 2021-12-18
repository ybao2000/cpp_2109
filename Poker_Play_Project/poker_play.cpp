// #include <bits/stdc++.h> // this is only for g++
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <random>
#include <ctime>

#include <io.h>
#include <fcntl.h>
using namespace std;

typedef pair<int, int> iPair; // first one should be the count, second one is the number

const wstring SPADE = L"\u2660";
const wstring HEART = L"\u2661";
const wstring DIAMOND = L"\u2662";
const wstring CLUB = L"\u2663";

enum Suit {
  Spade = 4,
  Heart = 3,
  Diamond = 2,
  Club = 1
};

enum Rank {
  RoyalFlush = 10,
  StraightFlush = 9,
  FourOfAKind = 8,
  FullHouse = 7,
  Flush = 6,
  Straight = 5,
  ThreeOfAKind = 4,
  TwoPairs = 3,
  OnePair = 2,
  HighHand = 1
};

class Card {
  private:
    Suit _suit;
    int _number;
  public:
  // constructor
  Card(Suit s, int n){
    _suit = s;
    _number = n;
  }

  int getNumber() {return _number;}

  Suit getSuit() {return _suit;}

  wstring strSuit() {
    // this function is going to return the special symbol
    switch(_suit) {
      case Spade: return SPADE;
      case Heart: return HEART;
      case Diamond: return DIAMOND;
      default: return CLUB;
    }
  }

  wstring strNumber() {
    switch(_number) {
      case 14: return L"A ";
      case 13: return L"K ";
      case 12: return L"Q ";
      case 11: return L"J ";
      case 10: return L"10";
      default: return to_wstring(_number) + L" ";
    }
  }
  // show the card
  wstring to_string() {
    return strSuit() + L" " + strNumber();
  }
};

bool compare_pair(iPair p1, iPair p2) {
  if(p1.first < p2.first) return false;
  else if(p1.first > p2.first) return true;
  else return p1.second > p2.second;
}

class Hand {
  private:
    wstring _player;
    vector<Card> _cards;  // it contains all 5 cards in descending order
    Rank _rank;
    vector<iPair> _groups;

  wstring strCards() {
    bool isFirst = true;
    wstring s = L"";
    for (auto card: _cards){
      if(isFirst){
        s += card.to_string();
        isFirst = false;
      } else{
        s += L" " + card.to_string();
      }
    }
    return s;
  }
  wstring strRank() {
    switch(_rank) {
      case RoyalFlush: return L"Royal Flush";
      case StraightFlush: return L"Straight Flush";
      case FourOfAKind: return L"Four of a Kind";
      case FullHouse: return L"Full House";
      case Flush: return L"Flush";
      case Straight: return L"Straight";
      case ThreeOfAKind: return L"Three of a Kind";
      case TwoPairs: return L"Two Pairs";
      case OnePair: return L"One Pair";
      default: return L"High Hand";
    }
  }
  void makeGroups(){
    map<int, int> mp;
    for (auto card : _cards){
      int number = card.getNumber();
      if (mp.find(number) == mp.end()){ // check if number is found in mp
        mp[number] = 1;
      }
      else {
        mp[number]++;
      }
    }
    // convert mp into _groups
    for(auto item : mp){
      _groups.push_back({item.second, item.first});
    }
    sort(_groups.begin(), _groups.end(), compare_pair); // pair wil be automatically sorted according to the first, then to the second
  }

  bool isFlush() {
    Suit suit = _cards[0].getSuit();
    for(auto card: _cards){
      if(card.getSuit() != suit) return false;
    }
    return true;
  }

  bool isStraight() {
    // check the _cards (in descending order)
    int num = _cards[0].getNumber()+1;  // initial
    for(auto card: _cards){
      if(card.getNumber() != num-1) {
        return false;
      }
      else {
        num--;
      }
    }
    return true;
  }

  bool isThreeOfAKind() {
    return _groups[0].first == 3;
  }

  bool isTwoPairs() {
    return _groups[0].first == 2 && _groups[1].first == 2;
  }

  bool isOnePair() {
    return _groups[0].first == 2;
  }

  bool isFullHouse() {
    return _groups[0].first == 3 && _groups[1].first == 2;
  }
  bool isFourOfAKind() {
    return _groups[0].first == 4;
  }
  bool isStraightFlush() {
    return isFlush() && isStraight();
  }

  bool isRoyalFlush() {
    return isStraightFlush() && _cards[0].getNumber() == 14;
  }
  public:
  // constructor
  Hand(wstring player, vector<Card> cards){
    _player = player;
    _cards = cards;
  }
  void setRank() {
    makeGroups();
    if(isRoyalFlush()) _rank = RoyalFlush;
    else if(isStraightFlush()) _rank = StraightFlush;
    else if(isFourOfAKind()) _rank = FourOfAKind;
    else if(isFullHouse()) _rank = FullHouse;
    else if(isFlush()) _rank = Flush;
    else if(isStraight()) _rank = Straight;
    else if(isThreeOfAKind()) _rank = ThreeOfAKind;
    else if(isTwoPairs()) _rank = TwoPairs;
    else if(isOnePair()) _rank = OnePair;
    else _rank = HighHand;
  }
  
  Rank getRank() { return _rank;}

  vector<iPair> getGroups() {return _groups;}

  void show() {
    wcout << _player << " : " << strCards() << " , " << strRank() << endl;
  }

  wstring getPlayer() {
    return _player;
  }
};

vector<Card> deal() {
  // this is going to generate 52 cards and shuffle them
  vector<Card> cards;
  for(int i=1; i<=4; i++) { // 4 suits
    for(int j=2; j<=14; j++){ // 13 numbers
      Suit suit = static_cast<Suit>(i);
      cards.push_back(Card(suit, j));
    }
  }
  srand(time(NULL));
  // random_shuffle(cards.begin(), cards.end());
  vector<Card> shuffled;
  while (cards.size() > 0){
    int num = cards.size();
    int seqNo = rand()%num;
    Card card = cards[seqNo];
    shuffled.push_back(card);
    cards.erase(cards.begin() + seqNo);
  }
  return shuffled;
}

bool compare_card(Card card1, Card card2) {
  return card1.getNumber() > card2.getNumber();
}

bool compare_groups(vector<iPair> groups1, vector<iPair> groups2) {
  int len1 = groups1.size();
  int len2 = groups2.size();
  for(int i=0; i<len1; i++){
    if(groups1[i].second > groups2[i].second) {
      return true;
    }
    else if(groups1[i].second < groups2[i].second) {
      return false;
    }
  }
  return true;
}

bool compare_hand(Hand h1, Hand h2) {
  Rank r1 = h1.getRank();
  Rank r2 = h2.getRank();
  if (r1 > r2) return true;
  else if(r1 < r2) return false;
  else {
    return compare_groups(h1.getGroups(), h2.getGroups());
  }
}

int main() {
  _setmode(_fileno(stdout), _O_U16TEXT);  
  vector<Card> shuffled = deal(); 
  vector<Hand> hands;
  auto it_begin = shuffled.begin();
  for(int i=0; i<4; i++){
    auto it_end = it_begin + 5;
    vector<Card> cards(it_begin, it_end);
    sort(cards.begin(), cards.end(), compare_card);
    Hand hand(L"Player " + to_wstring(i+1), cards);
    hand.setRank();
    hand.show();
    hands.push_back(hand);
    it_begin = it_end;
  }
  bool c01 = compare_hand(hands[0], hands[1]);
  bool c02 = compare_hand(hands[0], hands[2]);
  bool c03 = compare_hand(hands[0], hands[3]);
  bool c12 = compare_hand(hands[1], hands[2]);    
  bool c13 = compare_hand(hands[1], hands[3]);    
  bool c23 = compare_hand(hands[2], hands[3]);  
  if (c01 && c02 && c03) {
    // player 1 wins!
    wcout << hands[0].getPlayer() << " wins!\n";
  }  
  else if(!c01 && c12 && c13) {
    wcout << hands[1].getPlayer() << " wins!\n";
  }
  else if(!c02 && !c12 && c23) {
      wcout << hands[2].getPlayer() << " wins!\n";  
  }
  else {
      wcout << hands[3].getPlayer() << " wins!\n";      
  }
}