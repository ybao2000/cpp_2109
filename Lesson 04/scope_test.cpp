#include <iostream>
using namespace std;

int a = 1;  //global
int main(){
  int a = 2;  // local
  // check local first, only when local is not found, will check global second
  cout << a << endl;
  // {
    int b = 3;
    a += b;
  // }
  // cout << a << ", " << b << endl;
  cout << a << endl;
}