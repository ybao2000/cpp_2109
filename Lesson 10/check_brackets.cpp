#include <iostream>
#include <stack>
using namespace std;

bool check_brackets(string s){
  stack<char> stk;
  for(char c : s){  // go through all characters in s
    if (c == '{' || c == '[' || c == '(') stk.push(c);
    else {
      if(stk.empty()) return false; // c needs a pair
      char c2 = stk.top();   // read the top
      if (c == '}' && c2 != '{') return false;
      else if (c == ']' && c2 != '[') return false;
      else if (c == ')' && c2 != '(') return false;
      stk.pop();    // get rid of the top
    }
  }
  return stk.empty();
}

int main(){
  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    string s;
    cin >> s;
    if (check_brackets(s)){
      cout << "valid" << endl;
    }
    else {
      cout << "invalid" << endl;
    }
  }
}