#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  // array
  // permuation: 4! = 24
  // int a[4] = {1, 2, 3, 4};
  // do {
  //   for (int i=0; i<4; i++){
  //     cout << a[i] << " ";
  //   }
  //   cout << endl;
  // } while(next_permutation(a, a+4));

  string s = "hello";
  do {
    cout << s << endl;
  } while(next_permutation(s.begin(), s.end()));
}