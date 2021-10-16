#include <iostream> // this is for intput and output

using namespace std;

namespace Ontario {
  string london = "Ontario London";
}

namespace English {
  string london = "England London";
}

// using namespace Ontario;

int main(){
  cout << English::london << endl;
}