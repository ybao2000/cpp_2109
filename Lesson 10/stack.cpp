#include <iostream>
#include <stack>
using namespace std;

int main(){
  stack<char> s;
  s.push('a');
  s.push('b');
  s.push('c');
  s.push('d');
  while(!s.empty()){
    auto elem = s.top();
    s.pop();
    cout << elem << endl;
  }
}