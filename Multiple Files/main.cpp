#include <bits/stdc++.h>  // <> is pre-defined
#include "quad_solver.h"  // "" means current folder
using namespace std;

// try to solve quadratic equations
// a x^2 + b x + c = 0
// I want some other guys to provide me a function
// 
// this is the signature of the function


int main(){
  double a, b, c;
  cin >> a >> b >> c;
  vector<double> ans = quad_solver(a, b, c); // this is going to return a vector of solutions
  if(ans.size() == 0) {
    // no answer
    cout << "no answer" << endl;
  } else if(ans.size() == 1) {
    cout << "one answer: " << ans[0] << endl;
  } else {
    cout << "answers: " << ans[0] << ", " << ans[1]  << endl;
  }
}