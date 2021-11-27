#include <iostream>
#include <set>

using namespace std;

int main() {
  int n;
  cin >> n;
  set<int> us;
  for (int i=0; i<n; i++){
    int a;
    cin >> a;
    us.insert(a);
  }
  cout << us.size() << endl;
}