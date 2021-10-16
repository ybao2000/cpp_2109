#include <iostream>
#include <ctime>
using namespace std;

// define a function, which accept a mark (int), and return a grade
// 85+: A
// 70+: B
// 60+: C
// 50+: D
// below 50: F 
string grade(int mark){
  // many times the sequences matters!
  if (mark >= 85){
    return "A";
  }
  else if(mark >= 70){
    return "B";
  }
  else if(mark >= 60) {
    return "C";
  }
  else if (mark >= 50){
    return "D";
  }
  else {
    return "F";
  }
}

int main(){
  // int mark;
  // cin >> mark;
  // string g = grade(mark);
  // cout << "your grade is " << g << endl;
  // cout << grade(55) << endl;
  // randomly generate a integer from 0 to 100
  // rand needs a seed, a good way is using current time as seed
  srand(time(NULL));  // NULL -> similar to None in Python
  int mark = ((rand()-1) % 100) + 1;
  cout << "your mark is " << mark << ", your grade is " << grade(mark) << endl;
}