#include <iostream>
#include <fstream>

using namespace std;

int main() {
  int a, b;
  ifstream infile;
  infile.open("test1.txt", ios::in);
  infile >> a >> b;
  infile.close();

  cout << a << " " << b << endl;
}
