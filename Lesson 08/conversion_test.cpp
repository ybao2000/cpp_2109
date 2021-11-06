#include <iostream>
#include <string>
using namespace std;

int main(){
  // how to convert string "12" to int 12?
  string s = "05:34 PM";
  // string => int
  int hour = stoi(s.substr(0, 2));
  int minute = stoi(s.substr(3, 2));
  // int d = stoi(s);
  cout << "hour:" << hour << ", minute:" << minute << endl;

  // what about the reverse way
  // int => string
   int a = 123;
   int b = 45;
   string sa = to_string(a) + to_string(b);
  cout << sa << endl;

  // there is also another function itoa
  cout << "------------------" << endl;
  char buff[100];
  itoa(a, buff, 16); // 2: binary, 10: decimal, 16: hex
  cout << buff << endl;
}