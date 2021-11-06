#include <iostream>
using namespace std;

// int get_median(int a, int b, int c){
//   if (a > b && a > c){ // a is the max
//     return b > c ? b : c;
//   } else if (b > a && b > c){  // b is the max
//     return a > c ? a : c;
//   } else{   // c is the max
//     return a > b ? a : b;
//   }
// }

// what is inline?
// inline means instead of just stack and jump back and forth,
// inline just directly copy the code for you
// it's faster than regular, but usually for one-line code
inline int max(int a, int b) {return a > b ? a : b;}
inline int min(int a, int b) {return a > b ? b : a;}
int get_median(int a, int b, int c){
  int x = max(max(a, b), c);
  int y = min(min(a, b), c);
  return a+b+c-x-y; // this could cause overflow
}

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  cout << get_median(a, b, c) << endl;
}