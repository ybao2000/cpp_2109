#include <iostream>
#include <vector>
using namespace std;

vector<int> func_1(){
  vector<int> v;  // local vector
  v.push_back(1);
  v.push_back(2);
  cout << "addr of v: " << &v << endl;
  return v;
}

int main() {
  vector<int> x = func_1();
  cout << "addr of x: " << &x << endl;
}