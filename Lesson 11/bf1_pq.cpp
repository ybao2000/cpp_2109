#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
  int n;
  cin >> n;
  priority_queue<int, vector<int>, greater<int>> pq;  // this is to get the minimum instead of max
  for(int i=0; i<n; i++){
    int a;
    cin >> a;
    pq.push(a);
  }
  while(!pq.empty()){
    int a = pq.top();
    pq.pop();
    cout << a << endl;
  }
}