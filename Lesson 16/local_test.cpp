#include <iostream>
using namespace std;

int func_1(){
  int a = 10;
  cout << "addr of a: " << &a <<endl;  
  return a;
}

// int& func_2(){
//   int a = 10; // local, in stack
//   cout << "addr of a: " << &a <<endl;
//   return a;
// }

int main() {
  int x = func_1();
  cout << "addr of x: " << &x << endl;
}