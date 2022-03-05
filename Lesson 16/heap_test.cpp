#include <iostream>
using namespace std;

int ga = 10;
int main() {
  int a = 10;
  int *pa = new int(10);  // for single variable
  cout << *pa << endl;  
  cout << "addr of a:" << &a << endl;
  cout << "addr of pa: " << pa << endl;
  cout << "addr of ga: " << &ga << endl;
  delete pa;  // release memory of one int
  cout << *pa << endl;  // pa is calle wild pointer, or dangling pointer

  int *qa = new int[10];  // square bracket, this is going to give you a chunk of array with size of 10
  // for(int i=0; i<10; i++){
  //   qa[i] = i;
  // }
  fill(qa, qa+10, 10); // this is going to fill all elements with 10
  for (int i=0; i<10; i++){
    cout << qa[i] << endl;
  }

  delete []qa;  // this is going to delete the array (release the chunk of memory)
}