#include <iostream>
using namespace std;

int main() {
  int S, M, L;
  // cin means get from input
  cin >> S >> M >> L;
  int total = S + 2 * M + 3 * L;
  if (total >= 10){
    // cout is output
    cout << "happy" << endl;
  }
  else {
    cout << "sad" << endl;
  }
}