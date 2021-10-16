#include <iostream>
using namespace std;

int main(){
  // I want to do Gauss problem
  // 1 + 2 + 3 + ... + 100
  // use while loop to do it
  int sum = 0;    // you need to initialize the sum
  int i = 1;      // this is your iterator, change from 1 to 100
  while (i <= 100){
    sum += i;
    i++;    // uniary operator i++ means i += 1 or i = i + 1
    // ++i;
  }
  cout << sum << endl;
}