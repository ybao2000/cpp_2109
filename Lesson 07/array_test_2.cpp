#include <iostream>
using namespace std;

int main(){
  const int SIZE = 100;
  int a[SIZE];

  int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << "size of b: " << sizeof(b) << "size of item: " << sizeof(b[0]);
  int size = sizeof(b) / sizeof(b[0]);
  for(int i=0; i<size; i++) {
    cout << b[i] << " ";
  }
  cout << endl;
}