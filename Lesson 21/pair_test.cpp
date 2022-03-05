#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<string, int> psi;  // this means psi is pair<string, int>

// pair is a built-in container
// which means you don't have to include anything
bool compare(psi &p1, psi &p2) {
  if (p1.first.length() != p2.first.length()) return p1.first.length() < p2.first.length();
  else return p1 < p2;
}

int main() {
	vector<psi> v;
  v.push_back({"Alpha", 5}); // using {} for the pair
  v.push_back({"Omicron", 10}); 
  v.push_back({"Zelta", 1});
  v.push_back({"ZZZ", 3});
  // traverse it and print out the virus name and the value
  // many many times, you want to sort
  sort(v.begin(), v.end(), compare);
  for (auto elem : v){
    cout << elem.first << " " << elem.second << endl;
  }
}