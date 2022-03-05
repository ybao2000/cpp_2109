// you as the person provides the problem
// give N
// give 2 unique lists
// count # of common number
// as a provider, you need to provide some test cases
// put them in files

// #include <bits/stdc++.h>  // don't use this header
#include <iostream> // this is for input/output
#include <fstream>  // this is for file input/output
#include <unordered_set>
#include <chrono> // this is to give you milliseconds
using namespace std;
using namespace std::chrono;

int n;
unordered_set<int> sa, sb; 

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
      int a;
      infile >> a;
      sa.insert(a);
    }
    for(int i=0; i<n; i++){
      int b;
      infile >> b;
      sb.insert(b);
    }    
    infile.close();

    // algorithm 2: use unordered_set instead set
    // time complexity is O(n)
    int cnt = 0;
    for(int a: sa){ // this is the iteration of sa
      if(sb.count(a) > 0) cnt++;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop-start);    
    cout << "total common numbers: " << cnt << "\n"; 
    cout << "Time spent: " << duration.count() << " microseconds\n";    
}