#include <iostream>
using namespace std;

int main(){
  //  test with multiplication table
  //  1, 2, 3, 4, 5, 6, 7, 8, 9
  //  2, 4, 6, 8, .....
  // ...
  //  9, 18, .................81
  int a[9][9];
  for (int row=1; row<=9; row++){
    for (int col=1; col<=9; col++){
      a[row-1][col-1] = row * col;
    }
  }
  for (int row=1; row<=9; row++){
    for (int col=1; col<=9; col++){
      cout << a[row-1][col-1] << " ";
    }
    cout << endl;
  }
}