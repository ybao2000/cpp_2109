#include <iostream>
using namespace std;
typedef long long ll;
// this is overloading
// problem of overloading:
// you have to define a lot of functions for the same code, but different date type
int myMax(int a, int b) {
  return a < bb ? b : a;
}
double myMax(double a, double b) {
  return a < b ? b : a;
}
// double myMax(int a, double b) {
//   return a <  b ? b : a;
// }

int main(){
  int a = 1, b = 23;
  cout << myMax(a, b) << endl;
  double c = 3.14, e = 2.718;
  cout << myMax(c, e) << endl;
  cout << myMax((double)a, e) << endl;
  ll l1= (ll)1e13, l2 = (ll)1e14;
  // cout << myMax(l1, l2) << endl;
}