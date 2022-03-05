#include <iostream>
#include <cmath>
using namespace std;

const int INF = int(1e9);

// a good habit is don't throw exception
struct dividedZeroException : exception {
  const char* what() const throw() {
    return "Divided by zero";
  }
};

int myDiv(int a, int b){
  if (b == 0) {
    // throw new dividedZeroException();
    cout << "divied by 0\n";
    return INF;
  }
  return a/b;
}

int main() {
  int a, b;
  cin >> a >> b;
  try {
    cout << "a/b: " << myDiv(a, b) << endl;
  }
  catch (dividedZeroException &e){
    cout << "Divided by zero" << endl;
  }
}