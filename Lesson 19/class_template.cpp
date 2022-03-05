#include <iostream>
#include <vector>
using namespace std;

// you can define your vector template

template<typename T>
class myVector {
  private:
    T m_array[100];
  public:
    int get_size() {return 100;}
};

int main(){
  myVector<int> vi;
  myVector<double> vd;
  myVector<string> vs;
}