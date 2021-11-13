#include <iostream>
#include <string>
using namespace std;

void time_section(string time){
  string sign = time.substr(6, 2);
  int hour = stoi(time.substr(0, 2));
  if (sign == "AM") {
    if (hour >= 5 && hour < 12) {
      cout << "morning" << endl;
    }
    else {
      cout << "evening" << endl;
    }
  }
  else {
    if(hour >=5 && hour < 12) {
      cout << "evening" << endl;
    }
    else{
      cout << "afternoon" << endl;
    }
  }
}

int main(){
  int N;
  cin >> N;
  cin.ignore(1000, '\n');  // this is to ignore the whole line
  for(int i=0; i<N; i++){
    string time;
    // cin >> time;
    getline(cin, time);
    // cout << time << endl;
    time_section(time);
  }
}