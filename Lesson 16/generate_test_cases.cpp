#include <iostream>
#include <fstream>
#include <random>
#include <set>

using namespace std;

set<int> s;

int main() {
  ofstream outfile;
  outfile.open("test_10.txt", ios::out);
  outfile << 10 << "\n";
  for(int k=0; k<2; k++){
    s.clear();
    for(int i=0; i<10; i++){
      int a = rand() % 20;
      while (s.count(a) > 0) {  // you should keep trying until you find a unique value
        a = rand() % 20;
      }
      s.insert(a);
      if (i > 0){
        outfile << " ";
      }
      outfile << a;
    }
    outfile << "\n";
  }
  outfile.close();
}