#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
  int Q;
  cin >> Q;
  deque<int> dq;
  for (int i=0; i<Q; i++){
    char q;
    int x;
    cin >> q >> x;
    if (q == 'F') dq.push_front(x);
    else if( q == 'E') dq.push_back(x);
    else if (q == 'R') dq.erase(find(dq.begin(), dq.end(), x));
  }
  for (int x : dq){
    cout << x << "\n";
  }
}