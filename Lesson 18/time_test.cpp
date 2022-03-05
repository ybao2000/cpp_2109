#include <iostream>
#include <ctime>  // c-language, c++ is a super-set of c
using namespace std;

int main(){
  // please print out the current time
  auto t = time(NULL);
  auto now = localtime(&t);
  cout << t << endl;
  cout << now << endl;
  // we need something like year-month-day hour:minute:second
  // cout << asctime(t) << endl;
  cout << asctime(now) << endl;
}