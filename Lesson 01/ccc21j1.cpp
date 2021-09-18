#include <iostream>
using namespace std;

int main(){
  int B;  // I declare/define a int variable called B
  cin >> B;
  int P = 5 * B - 400;  // I define/assign in the same time
  cout << P << endl;
  // calgary, higher than sea level
  // boil temperature < 100, p < 100kpa > 1
  if (B < 100){
    cout << 1 << endl;
  }
  else if(B> 100){
    cout << -1 << endl;
  }
  else {
    cout << 0 << endl;
  }
}