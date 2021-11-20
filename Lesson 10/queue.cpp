#include <iostream>
#include <queue>
using namespace std;

int main(){
  queue<char> q;
  q.push('a');
  q.push('b');
  q.push('c');
  q.push('d');

  while(!q.empty()){
    auto elem = q.front();
    q.pop();
    cout << elem << endl;
  }
}