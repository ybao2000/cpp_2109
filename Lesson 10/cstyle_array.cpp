#include <iostream>

using namespace std;
const int SIZE = 100;

int main(){
  int v;  // this is just one variable
  // standard compiler (following ISO standrad): size has to be const
  int n;
  cin >> n;
  // int *a = new int[n];  // using pointer
  int a[SIZE];
  for (int i=0; i<n; i++){
    a[i] = i*i;
  }
  cout << sizeof(a) << endl;
}