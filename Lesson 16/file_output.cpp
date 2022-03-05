#include <iostream>
#include <fstream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  // I want to save a in a file
  // cout << "Look what I got: " << a << endl;
  // first question: where is the file
  ofstream outfile;
  outfile.open("test1.txt", ios::out);
  outfile << a << " " << b << endl;

  outfile.close();
}