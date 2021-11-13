#include <iostream>

using namespace std;

// struct is usually for small object
// if inside your struct, it has no more than 4 variables
struct Point {
  int x, y;
};

struct Car {
  // for the struct, everything is public by default
  string brand;
  string model;
  string color;
  int doors;
  string engine; 
};

int main(){
  Point p1 = Point();
  p1.x = 10;
  p1.y = 20;
  cout << p1.x << ", " << p1.y << endl;
  // Car c1 = Car();
  // c1.brand = "Honda";
  // c1.model = "Civic";
  // c1.color = "blue";
  // c1.doors = 4;
  // c1.engine = "2.5L";
  Point p2 = { 3, 4};
  cout << p2.x << ", " << p2.y << endl;
}