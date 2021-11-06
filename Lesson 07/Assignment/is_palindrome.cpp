
#include <iostream>
#include <algorithm>
using namespace std;

// // the string and its reverse are the same
// bool is_palindrome(string s){
//     string t = s;
//    reverse(s.begin(), s.end());
//    return t == s;
// }

// 2-pointer algorithm
bool is_palindrome(string s){
  // you can use 2-index
  int idx_1 = 0;
  int idx_2 = s.length()-1;
  while (idx_1 < idx_2){
    if (s[idx_1] != s[idx_2]) {
      return false;
    }
    idx_1 ++;
    idx_2 --;
  }
  return true;
}

int main(){
  string s;
  cin >> s;
  if(is_palindrome(s)){
    cout << "yes" << endl;
  }
  else {
    cout << "no" << endl;
  }
}
