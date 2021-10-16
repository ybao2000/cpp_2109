#include <iostream>
using namespace std;

const string MONDAY = "Monday";
// enum

string select_course(int week_day){
  // if (week_day == "Monday" || week_day == "Wednesday"){
  //   return "Math";
  // }
  // else if(week_day == "Tuesday" || week_day == "Thursday"){
  //   return "LA";
  // }
  // else if(week_day == "Friday"){
  //   return "Social";
  // }
  // else { // weekends
  //   return "Game";
  // }
  string course;
  switch(week_day){
    case 1:
    case 3:
      course =  "Math";
      break;
    case 2:
    case 4:
      course =  "LA";
      break;    
    case 5:
      course = "Social";
      break;      
    default:
      course = "Game";
  }
  return course;
}

int main(){
    int week_day = 41;
    // Monday, Tuesday, Wednesday, Thurdays, Friday, Saturday, Sunday
    // write a function, depending on week_day, 
    // return course
    cout << select_course(week_day) << endl;
}