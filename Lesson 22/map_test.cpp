#include <iostream>
#include <map>
using namespace std;

void print(map<string, string> mp) {
  for (auto kvp : mp) {
    cout << "kvp: [" << kvp.first << ", " << kvp.second << "] ";
  }
  cout << endl;
}
int main(){
  map<string, string> mp;
  mp["hello"] = "9";  //  insert or update
  // print(mp);
  // cout << mp["hellxo"] << endl;
  // print(mp);
  // // if key doesn't exist, 
  // // based on the value type
  // // int, double, => 0
  // // string => ""
  // // a value of that type which means false
  // // string s = "bbb";
  // // if (s) {  // this is compare a with something which means false
  // //   cout << "true" << endl;
  // // }
  // mp.erase("hello");
  // cout << "size of the map: " <<  mp.size() << endl;
  // map, and set are automatically sorted according to the key
  mp["blah"] = "10";
  mp["comeon"] = "1";
  print(mp);

}