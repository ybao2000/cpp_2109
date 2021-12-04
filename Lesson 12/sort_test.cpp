#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  // sort an array
  const int N = 10;
  int a[N];
  int p = 53;
  int q = p;
  for(int i=0; i<N; i++){
    a[i] = (q*(i+1)) % 1000;
    q = (q * p) % 1000;
  }
  // sort(a, a+N); // sort from begin of a to a + N, in ascending order
  sort(a, a+N, greater<int>()); // use greater<int>() for descending order
  for(int i=0; i<N; i++) cout << a[i] << "\n";
}