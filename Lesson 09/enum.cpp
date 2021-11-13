#include <iostream>

using namespace std;

// this is simiar to int, but instead of number, it's using a string
enum Suit {
  Spade = 4,
  Heart = 3,
  Diamond = 2,
  Club = 1
};

int main(){
  // Suit s = Club;
  // cout << s << endl;
  Suit s = Club;
  switch(s){
    case Spade:
      cout << "this is a space" << endl;
      break;
    case Heart:
      cout << "this is a heart" << endl;
      break;
    case Diamond:
      cout << "this is a diamond" << endl;
      break;
    case Club:
      cout << "this is a club" << endl;
      break;            
  }
}