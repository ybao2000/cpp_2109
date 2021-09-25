#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

typedef long long ll; // this means you use ll as alias for long long

int main(){
    // auto a = 1000000000;    // 4 bytes
    // // what is the maximum int?
    // short b = 1;  // 2 bytes
    // // a = "abc";
    // cout << a << endl;
    // // char is a tiny integer (1 byte)
    // // but it's special: when you print it, it will show the character instead of number
    // char c = 'a';
    // cout << c << endl;
    // double d = 0.1;
    // double d11 = 0.2 + 0.2 + 0.2 + 0.2 + 0.2;
    // cout <<  d11 << endl;
    // I want pi/4
    double a = asin(sqrt(2.0)/2.0);
    double b = M_PI/4.0;
    cout << a << ", " <<  b << endl;
    double tol = 1e-8;
    if (abs(a-b) < tol){  // this is the correct way to compare 2 doubles
      cout << "same" << endl;
    }
    else {
      cout << "different" << endl;
    }
    ll x = 1010101010;
    auto y = x*x;
    cout << y << endl;

    int t1 = 1e9; // this is ok to convert a double into integer
    ll t  = 3LL * t1;  // whenver you do the math calcualation *, + , / , - , 
    // criterion: char, short, int, long long, double
    cout << t << endl;
}