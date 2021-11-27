#include <iostream>
#include <queue>
using namespace std;

int main(){
  priority_queue<int> pq;
  pq.push(3);
  pq.push(5);
  pq.push(10);
  pq.push(1);
  pq.push(3);

  while(!pq.empty()){
    auto elem = pq.top();
    pq.pop();
    cout << elem << endl;
  }
}