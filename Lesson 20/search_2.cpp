#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void print(set<int> s){
  for(auto elem : s){
    cout << elem << " ";
  }
  cout << endl;  
}

int main() {
  set<int> s1 = {50, 30, 20, 70, 40, 20, 30, 40, 50};
  print(s1);
  auto it = lower_bound(s1.begin(), s1.end(), 20);
  cout << *it << endl;
  // one question: how to find the position(index)?
  // set doesn't allow for the diference of iterators
  // cout << it-s1.begin() << endl; 
  auto it2 = upper_bound(s1.begin(), s1.end(), 20);
  cout << *it2 << endl;
  bool is_found = binary_search(s1.begin(), s1.end(), 20);
  cout << (is_found ? "yes" : "no") << endl;  
}