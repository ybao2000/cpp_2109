#include <iostream>
using namespace std;

int main(){
  // all these are c-language
  // c++ is a superset of c
  // for c, string is a pain
  auto a = "Hello world";
  const char *p = a;
  // a[0] = 'M';
  cout << "p itself: " << p << ", address of p: " << &p << ", value of p:" << p[0] << endl;

  // you better to use string
  // in python: string is unmutable
  // but in c++, string is mutable, it's a wrapper of array of characters
  string s = "Hello world";
  cout << "s itself: " << s << ", address of s: " << &s << ", the first one:" << s[0] << endl;
  s[0] = 'M';
  cout << s << endl;
  char b[] = "Hello world"; // why it's twelve? because it automatically append stopper '\0'
  b[11] = 'P';
  cout << b << endl;

}