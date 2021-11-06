#include <iostream>
using namespace std;

int main(){
  string a = "aapl";
  string b = "aapll";
  if (a < b){
    cout << a << " is smaller" << endl;
  }
  else if (b < a) {
    cout <<  b  << " is smaller" << endl;
  }
  else {
    cout << "same" << endl;
  }
  cout << "----------------" << endl;
  string sub = "a";
  a.replace(a.find(sub), sub.length(), "A");
  cout << a << endl;
}