#include <iostream>
using namespace std;

// define a function min, max
// give 2 int, return minimum/max

int min(int a, int b)
{
  if (a > b)
  {
    return b;
  }
  else
  {
    return a;
  }
}

int max(int a, int b) { return a < b ? b : a; }

int main()
{
  int a = 5;
  int b = 6;
  int min_v = min(a, b);
  int max_v = max(a, b);
  cout << "min: " << min_v << ", max: " << max_v << endl;
}