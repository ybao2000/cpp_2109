#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  // double a = 1.23e9;
  // cout << fixed << setprecision(2) << a << endl;
  // double b = 20393892392.20230230202;
  // // please write it in scientific notation
  // cout << scientific << setprecision(2) << b << endl;
  // int c = 1234;
  // cout << setw(8) << c << endl; // format this as size of 8, if not enough, it will fill with empty space
  string name = "Tom Sawyer";
  int age = 10;
  string height = "4'9";
  bool sex = true;
  // please print out a sentence
  // My name is ___. I am ___ years' old. I am ___ and I am a ___
  cout << "My name is " << name << ". I am " << age << " years' old. I am " << height << " and I am a " << (sex ? "boy" : "girl") << endl;
  // printf("My name is %s. I am %d years' old. I am %s and I am a %s\n", name, age, height, sex ? "boy" : "girl");
  // cout: sometimes it's not convenient to print a sentence with lots of variable inside
  // printf: C-style syntax, seems not support string
  // conclusiong: if the sentence doesn't have string as variable, maybe you better use printf
  // otherwise, you need to use cout
}