#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point {
  int x, y;
};

int main(){
  pair<int, int> p1;
  p1.first = 5;
  p1.second = 6;

  pair<int, int> p2(5, 6);
  cout << p2.first << ", " << p2.second << endl;

  pair<int, int> p3 = {51, 6};
  cout << p3.first << ", " << p3.second << endl;  

  vector<Point> v;
  for (int i=0; i<10; i++){
    v.push_back({i%4, i%3});
  }
  sort(v.begin(), v.end());
  for (auto elem : v){
    cout << elem.x << ", " << elem.y << endl;
  }
  // likes like Point and pair<int, int> similar, but they are not!!!
  // because sometimes you want to sort
  // pair works, Point not!
}