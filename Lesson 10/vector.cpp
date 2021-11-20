#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> v;
  // v.push_back(5);
  // v.push_back(6);
  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    v.push_back(i*i);
  }
  cout << "size: " << v.size() << endl;
  v.insert(v.begin(), 100);
  cout << v[0] << endl;
  // advantage: index is allowed
  // drawback: insert to the beginning is O(n)
  for (auto elem : v){
    cout << elem << endl;
  }
}