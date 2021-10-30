#include <iostream>
// #include <cmath>
using namespace std;

bool is_prime(int num){
  // we can improve the loop
  // can stop at half + 1
  // can stop at the square root
  for(int i=2; i*i<=num; i++){
    if (num % i == 0) return false;
  }
  return true;
}

int main(){
  int N;
  cin >> N;
  int count = 0;
  int num = 2;  
  while(count < N) {
    if (is_prime(num)) {
      cout << num << endl; // you print the prime
      count ++;
    }
    num ++;
  }
}