#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
using namespace std;

typedef tuple<string, int, int> tsii;

bool compare(tsii &t1, tsii &t2) {
  string s1 = get<0>(t1);
  string s2 = get<0>(t2);
  if (s1.length() != s2.length()) return s1.length() < s2.length();
  else return t1 < t2;
}


int main() {
	vector<tsii> v;
  v.push_back({"Alpha", 5, 6}); // using {} for the pair
  v.push_back({"Omicron", 10, 1}); 
  v.push_back({"Zelta", 1, 3});
  v.push_back({"ZZZ", 3, 5});
  sort(v.begin(), v.end(), compare);
  // what about traverse
  for (auto elem : v) {
    cout << get<0>(elem) << " " << get<1>(elem) << " " << get<2>(elem) << endl;
  }
}