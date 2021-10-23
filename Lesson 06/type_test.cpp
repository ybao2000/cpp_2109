#include <iostream>
using namespace std;

typedef long long ll;

// void increment(int a){ // passing in the copy of a
//   a++;
// }

void increment (int *pa){
  (*pa)++;  // change the value at the location
}

void increment(int &a){   // passing in the reference
// benefit of using reference:
// 1. sometimes I really want to change a
// 2. copy means you have to additional thing
  a++;
}

// struct is letting you define a complicated value type
struct Point {
  double x, y, z;
};

void increment(Point &p){
  p.x++;
  p.y++;
  p.z++;
};

int main(){
  // all variables have to be declared as some type
  // these 6 types are called primitive types (simple, built-in, value-type)
  int a = 5;
  double b;
  string s;
  bool b2;
  ll c;
  char d;
  int t = 10;
  // // some types are not value type, reference type
  // int arr[] = {1, 2, 3, 4};
  // increment(a);
  // increment(&a);
  increment(a);
  cout << "a: " << a << endl;
  cout << (a & t) << endl;
  Point p = {1, 2, 3};  // this means you have a Point with coord (1, 2, 3), value type
  increment(p);
  cout << "P.x: " << p.x  << endl;
}