// #include <bits/stdc++.h>  // this is only supported in gnu c++
#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(){
  unordered_map<int, string> um;
  um[1] = "I am alpha";
  um[2] = "I am beta";
  // if key doesn't exist, it just inserts the {key, value}
  // if key already exists, it just replace the value
  for(int i=0; i<10; i++){
    um[i] = "blah " + to_string(i);
  }
  // let's print out the result
  for(auto elem: um){
    cout << elem.first << ", " << elem.second << endl;
  }

  // how to erase the key?
  um.erase(1);
  auto it = um.find(2); // in the collection, people like to call it iterator
  um.erase(it);

  cout << "-----------------" << endl;
  // for(auto elem: um){
  //   cout << elem.first << ", " << elem.second << endl;
  // }
  for (auto it = um.begin(); it != um.end(); it++){
    cout << (*it).first << ", " << (*it).second << endl;
  }


}