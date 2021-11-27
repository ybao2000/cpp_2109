// multiset
#include <iostream>
#include <set>

using namespace std;

int main(){
  int n;
  cin >> n;
  multiset<int> ms;
  // the amazing thing about multiset is it's already sorted
  for(int i=0; i<n; i++){
    int a;
    cin >> a;
    ms.insert(a);
  }
  while(!ms.empty()){
    int a = *ms.begin();
    cout << a << endl;
    ms.erase(ms.begin());
  }
}