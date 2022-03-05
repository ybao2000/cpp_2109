#include <bits/stdc++.h>
using namespace std;

int g_a = 10; // global variable
int g_b = 10;

int main() {
  int l_a = 10; // local variable
  int l_b = 10;
  cout << "address of l_a: " << &l_a << endl;
  cout << "address of l_b: " << &l_b << endl;
  cout << "address of g_a: " << &g_a << endl;
  cout << "address of g_b: " << &g_b << endl;
}