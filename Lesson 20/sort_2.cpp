#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<string> v){
  for(auto elem : v){
    cout << elem << " ";
  }
  cout << endl;
}

bool compare(string &s1, string &s2) {
  return s1.length() < s2.length();
}

int main(){
  vector<string> v = {"abc", "abcd", "abcde", "abce", "abcabc"};
  sort(v.begin(), v.end(), compare);
  // sometime, you want to sort according to the length
  print(v);
}