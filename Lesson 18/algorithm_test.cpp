#include <iostream>
#include <algorithm>
using namespace std;
const int SIZE = 100;
int a[SIZE];
int n;

void output(){
  for(int i=0; i<n; i++){
    if (i == 0) cout << a[i];
    else cout << " " << a[i];
  }
  cout << endl;
}

int compare(int x, int y) {return x > y; }

int main(){
  // __gcd
  // flll: to initialize a container with an intial value
  // fill(a, a+SIZE, -5);
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  // sort(a, a+n, compare); // what about if I want descending order?
  reverse(a, a+n);
  output();
  cout << count(a, a+SIZE, 55) << endl;
}