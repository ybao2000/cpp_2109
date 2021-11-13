#include <iostream>

using namespace std;

void christmas_tree(int h1, int h2){
  for(int i=1; i<=h1; i++){
    // you need to print h1 lines
    // first, you need to print the space
    for(int k=1; k<=h1-i; k++){
      cout << ' ';
    }
    // second, you need to print the *
    for(int k=1; k<=2*i-1; k++){
      cout << '*';
    }
    cout << endl;
  }
  for(int i=1; i<=h2; i++){
    for(int i=1; i<=h1-1; i++){
      cout << ' ';
    }
    cout << '*' << endl;
  }
}

int main(){
  int h1, h2;
  cin >> h1 >> h2;
  christmas_tree(h1, h2);
}