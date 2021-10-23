#include <iostream>
using namespace std;

int main(){
  int a = 8, b = 10;
  int* pa = &a;
  int* pb = &b;
  cout << "value of a: " << a << ", address of a: " << &a << endl;
  cout << "value of b: " << b << ", address of b: " << &b << endl;
  cout << "pa: " << pa << endl;
  cout << "pb: " << pb << endl;
  void* va = (void *) pa;
  cout << "va: " << va << endl;

  // what is the difference between pa and va
  // with pa, you can get the correct content
  cout << "the content at the address: " << *pa << endl;
  cout << "the content at the address: " << *((int *)va) << endl;

  string s = "Hello world";
  string* ps = &s;
  cout << "ps: " << ps << ", content of ps: " << *ps << endl;
  string t = "I am good";
  ps = &t;    // ps is a special variable, now ps is the address of t
  cout << "ps: " << ps << ", content of ps: " << *ps << endl;

  // hackers like pointer
  // because pointer can go to any address
  // earlier, when the OS is not very good, some hacker can use pointer to go the OS area
  // nowdays, the OS area is forbidden, your pointer cannot go there
  
}