#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int a = 32;
  int b = 24;
  int g = __gcd(a, b);
  int l = a * b / g;
  // gcd * lcm = a * b
  printf("g: %d, l: %d\n", g, l);
}