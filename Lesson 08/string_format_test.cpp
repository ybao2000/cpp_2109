#include <iostream>
#include <string>
using namespace std;

int main(){
  // // 
  // string name = "Bobby";
  // int age = 12;
  // string height = "4'9\"";
  // // Hi, my name is ____, my age is __, and my height is ____
  // // in c++_20, format
  // string line = "Hi, my name is " + name + ", my age is " + to_string(age) + ", and my height is " + height;
  // cout << line << endl;
  // sometimes, print the multiplication table
  for (int i =1; i<=9; i++){
    for(int j=1; j<=9; j++){
      // 1 x 1 = 1, 1 x 2 = 2, .... 1 x 9 = 9
      //...
      // 9 x 1 = 9, 9 x 2 = 18, 
      string si = to_string(i);
      if (si.length() == 1) si = ' ' + si;
      string sj  = to_string(j);
      if (sj.length() == 1) sj = ' ' + sj;
      string sij = to_string(i*j);
      if(sij.length() == 1) sij = ' ' + sij;
      string term = si + " x " + sj + " = " + sij;
      if (j == 1){
        cout << term;
      }
      else {
        cout << ", " << term ;
      }
    }
    cout << endl;
  }
}