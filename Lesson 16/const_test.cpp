#include <iostream>

using namespace std;

int main() {
  int la;
  const int lca = 10;
  static int sa = 10;
  cout << "address of la: " << &la << endl;
  cout << "address of lca: " << &lca << endl;
  cout << "address of sa: " << &sa << endl;  
}