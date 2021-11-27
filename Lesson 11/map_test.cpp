#include <iostream>
#include <map>

using namespace std;

int main() {
  map<int, string> m;
  m[1] = "I am alpha";
  m[2] = "I am beta";

  for (int i=0; i<10; i++){
    m[i] = "blah " + to_string(i);
  }

  for(auto elem: m){
    cout << elem.first << ", " << elem.second << endl;
  }

  auto it = m.begin(); // this is to give you the smallest key
  cout << (*it).first << ", " << (*it).second << endl;
}