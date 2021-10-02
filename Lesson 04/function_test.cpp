#include <iostream>
using namespace std;

void happen_birthday(string name){
  cout << "happy birth to you" <<  endl;
  cout << "happy birth to you" <<  endl;
  cout << "happy birth to " << name <<  endl;
  cout << "happy birth to you" <<  endl;
}

int main(){
  happen_birthday("Abby");
  cout << "---------------" << endl;
  happen_birthday("Bobby");
}