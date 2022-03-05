#include <iostream>
#include <fstream>
#include <random>
#include <set>
#include <string>
#include <ctime>

using namespace std;
const int n = 1000000;
bool available[n*5];

int main() {
  ofstream outfile;
  string fileName = "test.txt";
  outfile.open(fileName, ios::out);
    outfile << n << "\n";
  srand( time(NULL) );
  for(int t=0; t<2; t++){
    fill(available, available+n*5, true);
    for(int i=0; i<n; i++){
      int k = (rand() * rand()) % (5*n); // maximum rand is 32767
      while (!available[k]) {  
        k = (k+1)%(5*n);
      }
      available[k] = false;
      if (i > 0){
        outfile << " ";
      }
      outfile << k;
    }
    outfile << "\n";
  }
  outfile.close();
}