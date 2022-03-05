// you as the person provides the problem
// give N
// give 2 unique lists
// count # of common number
// as a provider, you need to provide some test cases
// put them in files

// #include <bits/stdc++.h>  // don't use this header
#include <iostream> // this is for input/output
#include <fstream>  // this is for file input/output
#include <algorithm>  // this is for sort
#include <chrono> // this is to give you milliseconds
using namespace std;
using namespace std::chrono;

const int SIZE = 1e7; // I just use a very big array, which can hold all possible values
int n;
int a[SIZE], b[SIZE];

int main() {
  auto start = high_resolution_clock::now();  
  ifstream infile;
  infile.open("test.txt", ios::in);
  if(!infile){
    cout << "no such file\n";
    return -1;
  }
  infile >> n;
  for(int i=0; i<n; i++){
    infile >> a[i];
  }
  for(int i=0; i<n; i++){
    infile >> b[i];
  }    
  infile.close();

  // algorithm 3: sort them first, and then compare them
  // time complexity is O(n logn)
  sort(a, a+n); // this is going to sort a from a[0] to a[n-1]
  sort(b, b+n);
  int cnt = 0;
  int idx_a=0, idx_b=0;
  while(idx_a < n && idx_b < n){
    if(a[idx_a] == b[idx_b]) {
      cnt++, idx_a++, idx_b++;
    }
    else if(a[idx_a] < b[idx_b]){
      idx_a++;
    } else{
      idx_b++;
    }
  }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop-start);  
    cout << "total common numbers " << cnt << "\n"; 
    cout << "Time spent: " << duration.count() << " microseconds\n";    
}