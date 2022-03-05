// you as the person provides the problem
// give N
// give 2 unique lists
// count # of common number
// as a provider, you need to provide some test cases
// put them in files

// #include <bits/stdc++.h>  // don't use this header
#include <iostream> // this is for input/output
#include <fstream>  // this is for file input/output
using namespace std;

const int SIZE = 1e7; // I just use a very big array, which can hold all possible values
int n;
int a[SIZE], b[SIZE];

int main() {
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

    // brute force -- it works only for small size
    // time complexity is O(n^2)
    int cnt = 0;
    for(int i=0; i<n; i++){
      int ai = a[i];
      for(int j=0; j<n; j++){
        if (ai == b[j]){
          cnt++;
          break;
        }
      }
    } 
    cout << "total common numbers: " << cnt << "\n"; 
}