#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int T;
  cin >> T;
  for (int _=0; _<T; _++){ // sometimes if you don't care about the iterator
    int N;
    cin >> N;
    int max_flow = 0;
    for(int __=0; __<N; __++){
      int a;
      cin >> a;
      // max_flow = max(max_flow, a);
      if (a > max_flow) max_flow = a;
    }
    cout << max_flow << endl;
  }
}