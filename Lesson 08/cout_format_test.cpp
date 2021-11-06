#include <iostream>
#include <iomanip> // io manipulation
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

int main(){
  double d = 1e9;
  cout << fixed <<setprecision(0) << d << endl;

  // double pi = 3.14159
  cout << fixed << setprecision(10) << M_PI << endl;

  int i = 123;
  cout << setfill('0') << setw(5) << i << endl;
}