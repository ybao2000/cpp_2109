#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main() {
  // you need a seed
  srand(time(0)*time(0));
  int a = rand();
  cout << a << endl;
}
