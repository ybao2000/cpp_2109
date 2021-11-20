#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;

// using reverse to do the conversion
// int reverse_number(int n) {
//   // convert into string
//   string s = to_string(n);
//   reverse(s.begin(), s.end());
//   int m = stoi(s);
//   return m;
// }

int reverse_number(int n){
  int a = 0;
  while (n > 0){
    int r = n % 10;
    a = a * 10 + r;
    n = n / 10;
  }
  return a;
}

int main(){
  int N;
  cin >> N;
  for(int i=0; i<N; i++){
    int n;
    cin >> n;
    cout << reverse_number(n) << endl;
  }
}