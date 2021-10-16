#include <iostream>
using namespace std;

int main(){
  int sum = 0;

  // what is I wang 1 + 3 + 5 + 7 + ... + 99
  for(int i=1, a=0; i<=100; i+=2){ // increment by 2
    // if (i % 2 == 0) continue;
    sum += i+a;
  }
  cout << sum << endl;  
}

