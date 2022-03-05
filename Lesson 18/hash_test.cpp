#include <iostream>
#include <functional>
using namespace std;

int main(){
  string a = "10";
  double b = 100;
  auto ha = hash<string>{}(a);
  auto hb = hash<double>{}(b);
  // printf("ha: %d, hb: %d\n", ha, hb);
  cout << "ha: " << ha << ", hb: " << hb << endl;
}