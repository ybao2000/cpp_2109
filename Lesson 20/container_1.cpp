#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <deque>
// #include <bits/stdc++.h>  // this is only supported by gnu c++
using namespace std;

int main(){
  // c-style array
  int a[5] = {1, 2, 3, 4, 5};
  const int n = 10;
  int b[n]; // this in only allowed in gnu c++
  // c++ is not owned by anyone
  // gnu c++ is just one compiler
  // there are lots of other compilers
  array<int, n> arr;  // this is c++ array, not successful at all!
  for (int i=0; i<n; i++) arr[i] = i;
  vector<int> v = {10, 20, 30, 40, 50 };  // vector is very successful!, it's called dynamic array
  // it has the benefit of array (you can use index)
  // and it is dynamically maintained
  cout << v[3] << endl;
  list<int> l = {10, 20, 30, 40, 50};  // not very successful, not used a lot
  // linked list, no index
  // cout << l[3] << endl;
  deque<int> dq = {10, 20, 30, 40, 50};
  // most time, you use deque instead of list
  // inside deque, it's a doubly linked list
  cout << dq[3] << endl;  // very interesting, deque supports index
}