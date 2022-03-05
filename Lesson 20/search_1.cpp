#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> v){
  for(auto elem : v){
    cout << elem << " ";
  }
  cout << endl;
}

int main(){
  vector<int> v1 = {5, 2, 3, 6, 10, 11, 12, 15, 20, 8};
  sort(v1.begin(), v1.end()); // before you use search functions, you have to sort the vector first
  print(v1);
  auto it = lower_bound(v1.begin(), v1.end(), 12);
  cout << *it << endl;
  // one question: how to find the position(index)?
  cout << it-v1.begin() << endl; // this will give you the position, this is the way to convert the iterator to position
  auto it2 = upper_bound(v1.begin(), v1.end(), 12);
  cout << *it2 << endl;
  bool is_found = binary_search(v1.begin(), v1.end(), 13);
  cout << (is_found ? "yes" : "no") << endl;
}