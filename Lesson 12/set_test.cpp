#include <iostream>
#include <set>

using namespace std;

int main() {
  int n;
  cin >> n;
  set<int> us;  // sort by minimum
  for (int i=0; i<n; i++){
    int a;
    cin >> a;
    us.insert(a);
  }
  // for (int x : us){
  //   cout << x << "\n";
  // }
  auto it = us.begin();
  cout << *it << endl;  // this is giving you the first one
}