#include <iostream>

using namespace std;

int main() {
  int T;
  cin >> T;
  for(int _=0; _<T; _++){
    int N;
    cin >> N;
    string a, b;
    cin >> a;
    cin >> b;

    string c;
    for(int i=N-1; i>=0; i--){
      c += b[i];
      c += a[i];
    }
    cout << c << "\n";  // endl is slower than \n
  }
}