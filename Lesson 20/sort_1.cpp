#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> v){
  for(auto elem : v){
    cout << elem << " ";
  }
  cout << endl;
}

bool compare(int a, int b) {return a > b;}  // this is descending order

int main(){
  // if you want to use search on vector
  // you have order it first
  vector<int> v1 = {50, 30, 20, 70, 40, 20, 30, 40, 50};
  // because vector is container, so you can use iterator
  // question? what if I want to sort in descending order
  sort(v1.begin(), v1.end(), compare);
  print(v1);
  cout << "---------------\n";
  int a[] = {50, 30, 20, 70, 40, 20, 30, 40, 50}; // c-style array, not c++ container
  sort(a, a+9);
  // for(int elem : a){
  //   cout << elem << " ";
  // }
  for(int i=0; i<9; i++) cout << a[i] << " ";
  cout << endl;
}