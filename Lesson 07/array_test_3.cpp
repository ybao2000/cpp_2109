#include <iostream>
using namespace std;

int main(){
  int N;
  cin >> N;
  // how can i assign an array?
  // the answer is you CANNOT
  // but you can use pointer to get a big chunk of memory
  int *a = new int[N];
  cout << "size of a: " << sizeof(a) << endl;
  fill(a, a+N, 5);
  for (int i=0; i<N; i++) {
    // you use index to get the element
    cout << a[i] << " ";
  }
  cout << endl;
}