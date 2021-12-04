#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  vector<int> vi;
  int N = 10;
  int p = 61;
  int M = 1000;
  int q = p;
  for(int i=0; i<N; i++){
    vi.push_back((q*(i+1)) % M);
    q = (q * p) % M;
  }
  sort(vi.begin(), vi.end(), greater<int>());
  for (int x : vi){
    cout << x << "\n";
  }
}