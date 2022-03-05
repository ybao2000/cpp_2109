#include <bits/stdc++.h>
using namespace std;

const double EPS = 1e-8;
// this is going to provide the solution
// to the quadratic equations
// a x^2 + b x + c = 0

vector<double> quad_solver(double a, double b, double c){
  vector<double> ans;
  // if (a == 0) { // don't ever ever using == to compare doubles!!!
  if (abs(a) <= EPS) { // this means a is 0
    if (abs(b) <= EPS){
      // throw "Divided by 0";
      // throw new exception("Divided by 0");
    }
    ans.push_back(-c/b);  // what if b is 0, we are going to deal with 0 later
  }
  else {
    double t = b*b-4*a*c;
    if (abs(t) <= EPS) {
      ans.push_back(-b/(2*a));
    } else if(t > EPS) {
      ans.push_back((-b-sqrt(t))/(2*a));
      ans.push_back((-b+sqrt(t))/(2*a));
    }
  }
  return ans;
}

int main() {
  double a =0, b = 0, c = 1;
  vector<double> ans = quad_solver(a, b, c);
  for (auto x : ans){
    cout << x << endl;
  }
}