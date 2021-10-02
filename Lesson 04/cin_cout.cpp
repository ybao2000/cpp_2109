#include <iostream>
#include <string>
using namespace std;

int main(){
  // int a, b;
  // cin >> a >> b;
  // cout << "a is " << a << ", and b is " << b << endl;
  // the solution is 
  // 1. getline
  cout << "Please enter your age" << endl;
  int age;
  cin >> age;
  cout << "Please enter your name" << endl;
  string name;
  cin.ignore(1000, '\n'); // what does this mean: ignore either 1000 chars or endline
  getline(cin, name);
  // if you don't need a full line, don't bother to use getline

  cout << "Your name is " << name << ", and your age is " << age << endl;
}