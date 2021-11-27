#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  // there are many ways to do this problem
  // way 1: vector
  int n;
  cin >> n;
  vector<int> v;
  // step 1: add them into a vector
  for(int i=0; i<n; i++){
    int a;
    cin >> a;
    v.push_back(a);
  }
  // step 2: sort the vector
  // for all containers(c++), it always have begin(), end(), iterator
  sort(v.begin(), v.end()); // by default, it will sort in ascending order
  for(int i=0; i<n; i++){
    cout << v[i] << endl;
  }
}