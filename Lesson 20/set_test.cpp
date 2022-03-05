#include <iostream>
#include <set>
#include <unordered_set>
#include <bitset>
using namespace std;

int main(){
  set<int> s1 = {5, 3, 2};
  // set is ordered
  s1.insert(4);
  s1.insert(2);
  for (auto elem : s1){
    cout << elem << " ";
  }
  cout << endl;
  cout << "-------------------\n";
  unordered_set<int> s2 = {5, 3, 2};
  s2.insert(4);
  s2.insert(2);
  for (auto elem : s2){
    cout << elem << " ";
  }
  cout << endl;    

  cout << "-------------------\n";
  multiset<int> s3 = {5, 3, 2};   
  // what is the difference between multiset and vector?
  // set is ordered
  s3.insert(4);
  s3.insert(2);
  for (auto elem : s3){
    cout << elem << " ";
  }
  cout << endl;  

  bitset bs[100];
}