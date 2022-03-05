#include <iostream>
using namespace std;

int main(){
  int a = 1, b = 2;
  cout << max(a, b) << endl;  // this is template, not overloading!!!
  double c = 3.14, e = 2.718;
  cout << max(c, e) << endl;
}