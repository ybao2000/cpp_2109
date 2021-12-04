#include <iostream>

using namespace std;

int main() {
  string S;
  cin >> S;
  int K;
  cin >> K;
  string t = S.substr(0, K);
  for (int i=1; i<(int)S.length()-K; i++){
    string t2 = S.substr(i, K);
    if (t2 < t) t = t2;
  }
  cout << t << endl;
}