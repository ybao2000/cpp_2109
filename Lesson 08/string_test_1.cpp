#include <iostream>
#include <vector>
using namespace std;

int main(){
  string s= "Hello world";  // always use double quote for string
  cout << s.length() << endl;

  // for (int i=0; i<s.length(); i++){
  //   cout << s[i] << endl;
  // }
  // for (char c : s){
  //   cout << c << endl;
  // }
  // vector<char> v(10, 'h');
  // for (char c : v){
  //   cout << c << endl;
  // }
  // python string is immutable, i.e., pythong string cannot be updated
  // but c++ can
  s[0] = 'M'; // using single quote for character
  cout << s << endl;
}