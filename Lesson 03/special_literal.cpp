#include <iostream>
using namespace std;

int main(){
  auto a = 50u;

  auto b = 0xF;  // this is hex-number
  cout << b << endl;

  // auto c = 1234ll;

  // auto d= 3.14;

  // auto e = 1e9;
  // int f = 1e9 + 7;
  // cout << f << endl;

  char c = '"'; // what if I want char '
  // there are also other special characters need escape
  // \t: tab, \n: new line, \": double quote, \\ for backslash itself, \': single quote
  cout << c << "\\" << c << endl;
}