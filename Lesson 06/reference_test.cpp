#include <iostream>
using namespace std;

int main(){
  int a = 10;
  int *pa = &a;   // pa is a pointer (a special variable, storing the address of a)
  int &b = a;   // b is not a variable!!!, b is a reference of a, which means, b is a nickname of a
  b = 3;
  int c = 15;
  b = c;
  cout << "b: " << b << ", a: "<< a << "c: " << c << endl;
  // a big question: why do we need need reference???
  // long time ago, there is no reference in C/C++
}