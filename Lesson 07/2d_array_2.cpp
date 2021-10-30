#include <iostream>
using namespace std;

int main(){
  // good habit: make sure size matches the actual size
  int a[][4] = {
    {1, 2, 3},
    {4, 5, 6, 5}
  };
  for (int i=0; i<2; i++){
    for(int j=0; j<4; j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}