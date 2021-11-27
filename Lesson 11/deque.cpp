#include <iostream>
#include <deque>
using namespace std;

int main(){
  deque<int> dq;
  dq.push_back(1);
  dq.push_back(2);
  dq.push_front(3);

  while(!dq.empty()){
    // auto elem = dq.front();
    // dq.pop_front();
    // cout << elem << endl;
    auto elem = dq.back();
    dq.pop_back();
    cout << elem << endl;
  }

}