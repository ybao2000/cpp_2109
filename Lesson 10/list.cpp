#include <iostream>
#include <list>
using namespace std;

int main(){
  list<int> lst;
  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    lst.push_back(i*i);
  }
  cout << "size: " << lst.size() << endl;
  // cout << lst[5] << endl;

  // drawback: no index
  // advantage: insert to the beginning is O(1)
  lst.push_front(200);
  cout << lst.front() << endl;
}