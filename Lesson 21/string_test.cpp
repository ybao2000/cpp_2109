#include <iostream>
using namespace std;

int main() {
	// append
  string s = "Hello world ";
  string t = "Buddy";
  // add them together "Hello world Buddy"
  string x = s + " " + t; // use "+" to add 2 string togher
  cout << x << endl;

  // what about "Hello Buddy world"
  // to do the insert, the best ways is using substr
  string y = s.substr(0, 6) + t + s.substr(5);  // pos(index) is always 0-based
  cout << y << endl;

  // c++ allows you to modify the string
  // python string is immutable, but c++ string is mutable!
  s[5] = '_';
  cout << s << endl;

  // iterator: a special kind of pointer
  auto it = s.begin();  
  cout << *it << endl;
  // you can use iterator to do the traverse
  // this : syntax is available only after C++ 11
  // for (auto elem : s){
  //   cout << elem << endl;
  // }
  for(auto it= s.begin(); it != s.end(); it += 2){
    cout << *it << endl;
  }
}