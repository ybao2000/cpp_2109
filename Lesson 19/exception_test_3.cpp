#include <iostream>
using namespace std;

int fibo(int a){
  if (a == 0 || a == 1) return 1;
  return fibo(a-1) + fibo(a-2);
}

int main(){
  // int a[5];
  // the woe is gnu c++, they don't throw error!!!
  // definitely it's wrong!!!
  // cout << a[100] << endl;
  cout << fibo(1000) << endl;
}