#include <iostream>
using namespace std;

int* func_1(){
  int *p = new int[10];
  for(int i=0; i<10; i++){
    p[i] = i*i;
  }
  return p;
}

int func_2() {
  int* x = func_1();
  for(int i=0; i<10; i++){
    cout << x[i] << endl; 
  }
  // big problem is when to release x????
}
int main() {
  func_2();
}