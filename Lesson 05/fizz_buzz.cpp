#include <iostream>
using namespace std;

void fizz_buzz(int n){
  // you need to print those fizz buzz things
  // loop from 1 to n
  // if i % 3 == 0: print "Fizz"
  // if i % 5 == 0: print "Buzz"
  // if i % 3 == 0 and i % 5 == 0: print "Fizz Buzz"
  // otherwise print the number
  // how to print them in one line
  bool first = true;
  for (int i=1; i<=n; i++){
    // if (!first) {
    //   // if not first, print a space
    //   cout << " ";
    // }
    // else {
    //   first = false;
    // }
    if (i > 1){
      cout << " ";
    }

    if (i%3 == 0 && i%5 == 0){
      cout << "FizzBuzz";
    }
    else if (i%3 == 0){
      cout << "Fizz";
    }
    else if(i%5 == 0){
      cout << "Buzz";
    }
    else {
      cout << i;
    }
  }
  cout << endl;
}
int main(){
  fizz_buzz(100);
}