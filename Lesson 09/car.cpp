#include <iostream>

using namespace std;

class Point {
  int _x, _y; // if it's a attribute/member, then use _
  // you need a constructor
  // constructor is a special function (function name is the same as the class name)
  // which is executed everytime you create an instance of the class
  void Secrect_info(){
    cout << "Hey. This is a secret" << endl;
  }
public:
  int temp_x, temp_y;

  Point(int x, int y){
    _x = x;
    _y = y;
  }

  void Inc_x() {
    _x++;
  }

  void Show() {
    cout << _x << ", " <<  _y << endl;
    if(_x == 5) {
      Secrect_info();
    }
  }
};

class Car {
  // for the class, everything is private by default
  string brand;
  string model;
  string color;
  int doors;
  string engine; 
};

int main(){
  // Car c1 = Car(); // similar to the function
  // c1.brand = "Honda";
  // c1.model = "Civic";
  // c1.color = "blue";
  // c1.doors = 4;
  // c1.engine = "2.5L";  
  Point p2 = Point(3, 4);
  p2.Inc_x();
  // cout << p2._x << ", " << p2._y << endl;
  p2.Show();
  p2.temp_x  = 5;
  p2.Inc_x();
  p2.Show();
}