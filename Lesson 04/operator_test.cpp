#include <iostream>
#include <cmath>
using namespace std;

int main() {
  // +, -, *, / these 4 are included in any language
  // %: remainder
  int a = 13;
  int b = 7;
  // // do you know how to get quotient?
  // int rem = a % b;
  // auto q = a / b;  // this will be the quotient
  // // how to get the round?
  // int r = round(double(a)/b);  // by default, when you convert double to int, it's cutoff
  // cout << rem << " " << q << " " << r << endl;
  int c = a & b;  // bit wise and
  int d = a | b;  // bit wise or
  int e = a ^ b;  // bit wise xor
  int f = ~a;     // bit wise not
  // binary: 
  cout << c << ", " << d << ", " << e << ", " << f << endl; // endl means end of line, return to next line
  int g = a << 3; // shift to left (number of bits)
  int h = a >> 1;
  cout << g << ", " << h << endl;
  // a += b;   // a = a + b
  // a *= b;   // a = a * b;
  // a /= b;   // a = a / b;
  // a -= b;   // a = a - b;
  // a %= b;   // a = a % b;
  // a >>= b;  // a = a >> b;
  // cout << a << endl;
  auto r1 = g > h;
  auto r2 = d < e;
  cout << r1 << ", " << r2 << endl;
  auto r3 = r1 && r2;   // and 
  auto r4 = r1 || r2;   // or
  auto r5 = !r1;        // not
  cout << r3 << ", " << r4 << ", " << r5 << endl;
  cout << "------------------" << endl;
  a = 10;
  // b = 20;
  // a--;  // a -= 1, a = a -1
  // b++;  // b += 1, b = b -1
  c = a--;  // c got assigned first, then decrease a
  cout << a << ", " << b << ", " << c << endl;
  a = 10;
  c = --a;  // decrease a first, then assign c
  // ++b;  
  cout << a << ", " << b << ", " << c << endl;
  cout << "------------------" << endl;
   b= 100;
  string s = a > b ? "a is greater than b" : "a is less than or equal to b";
  cout << s << endl;
}