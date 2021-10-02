#include <iostream>
#include <cmath>
using namespace std;

// what is overloading
double area(double a, double h){
  return a * h / 2.0;
}

double area(double a, double b, double c){
  double l = (a+b+c)/2.0;
  return sqrt(l * (l-a) * (l-b) * (l-c));
}

int main(){
  double a = 5;
  // double h = 5;
  // cout << area(a, h) << endl;
  double b = 12;
  double c = 13;
  cout << area(a, b, c) << endl;
}