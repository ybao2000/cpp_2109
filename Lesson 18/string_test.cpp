#include <iostream>
#include <string>
using namespace std;

int main(){
  double a= 3.14;
  string sa = to_string(a);
  cout << "sa: " << sa << endl;
  double b = stod(sa);
  cout << "b: " << b << endl;
}