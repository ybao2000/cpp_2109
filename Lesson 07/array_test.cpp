#include <iostream>
using namespace std;

int main(){
  // what is array?
  int a;  // this is a single variable
  // I want to store the names of all class
  // if the class has 50 students
  // string a1, a2, a3, a4, a5, ..., a50;
  // you have 50 numbers, 
  // int a1, a2, a3, a4, ..., a50;
  int a2[100]; // this is also a variable, but this variable has a special type
  // a2 is an array of int
  // I want the first one to 1, second one to 2, ...
  // for (int i=0; i<100; i++){
  //   a2[i] = 0;
  // }
  fill(a2, a2+100, 5);
  // what if I want to init all with 0
  for (int i=0; i<100; i++) {
    // you use index to get the element
    cout << a2[i] << " ";
  }
  cout << endl;
}