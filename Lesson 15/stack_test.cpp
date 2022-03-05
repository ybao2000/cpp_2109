#include <bits/stdc++.h>
using namespace std;

int ga;

void func_1(int p){
  static int sa;
  cout << "address of sa in func_1: " << &sa << endl;
  cout << "address of p in func_1 parameter:" << &p << endl;
  int a = 5;
  cout << "address of a in func_1: " << &a << endl;
}

void func_2(int p){
  cout << "address of p in func_2 parameter:" << &p << endl;  
  int a = 5;
  cout << "address of a in func_2: " << &a << endl;
}

void dummy() {
  int x, y, z, a, b, c;
  cout << "this is just dummy" << endl;
}

int main() {
  cout << "address of ga: " << &ga << endl;
  int x;
  cout << "address of x: " << &x << endl;
  func_1(x);
  dummy();
  func_2(x);
}