#include <iostream>
using namespace std;

int main(){
  int M, N;
  cin >> M >> N;
  // auto a = new int[M][N];
  auto a = new int*[M]; // each row is a point
  for (int i=0; i<M; i++){
    a[i] = new int[N];
  }
}