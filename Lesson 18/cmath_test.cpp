#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a = 0.57;  // about half of pi
  // could you calculate a^2.5
  // you need pow function
  // cout << pow(a, 2.5) << endl;
  printf("a: %lf, pow of a: %lf, sqrt of a: %lf\n", a, pow(a, 2.5), sqrt(a));
  printf("ceil of a: %d, floor of a: %d, round of a: %d\n", (int)ceil(a), (int)floor(a), (int)round(a));
  printf("fabs of a: %lf, abs of a: %lf\n", fabs(a), abs(a));
  printf("exp of a: %lf\n", exp(a));
  printf("log of a: %lf, log10 of a: %lf, log2 of a: %lf\n", log(a), log10(a), log2(a));
  // for trig functions, always using radian, not degree
  // rad = deg * pi / 180
  // trig functions
  printf("sin of a: %lf, cos of a: %lf, tan of a: %lf\n", sin(a), cos(a), tan(a));
  // arc functions: return the angle
  printf("sin of a: %lf, cos of a: %lf, tan of a: %lf\n", asin(a), acos(a), atan(a));
} 