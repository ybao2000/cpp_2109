#include <iostream>

using namespace std;

int main(){
  string s= "Hello world";
  cout << s[0] << endl; // this is to give you the character
  // cout <<  s[0:2] << endl;
  cout << s.substr(2, 1) << endl; // substr(start_index, size)
  cout << s.substr(1) << endl;
  cout << "------------" << endl;
  string t = "blah blah blah";
  s.append(t); // s = s + t;
  cout << "s: " << s << ",t:" << t<< endl;
}