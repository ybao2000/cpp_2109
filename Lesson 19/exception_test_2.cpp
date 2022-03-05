#include <iostream>
using namespace std;

struct myException : exception {
  const char* what() const throw() {
    return "my custom exception";
  }
};

int main() {
  try {
    throw myException();
  }
  catch (myException &e) {
    cout << "myException caught" << endl;
    cout << e.what() << endl;
  }
  catch( exception &e) {
    cout << "unexpected" << endl;
  }
}