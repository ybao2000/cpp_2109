#include <iostream>
using namespace std;

int main(){
  // calculate the gauss sum
  int sum = 0;
  for(int i=1; i<=100; i++){
    // I want to skip all numbers which can be divided by 3
    if (i % 3 == 0) {
      continue;
    }
    sum += i;
    // what is break
    // if (i== 10){
    //   break;
    // }
  }
  cout << sum << endl;
}