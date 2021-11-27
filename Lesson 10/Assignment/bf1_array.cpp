#include <iostream>
#include <algorithm>

using namespace std;
// define them in global
// so that they can be shared by functions
// standard c++, the size of array has to be constant
const int SIZE = 1000;
int A[SIZE];

int main() {
  // you can use array
  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> A[i];
  }
  sort(A, A+n);
  for(int i=0; i<n; i++){
    cout << A[i] << endl;
  }
}
