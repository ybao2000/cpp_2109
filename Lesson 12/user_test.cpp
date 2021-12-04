#include <iostream>
#include <vector>
using namespace std;

class User {
  int _id;  // by default, it's private
  string _fullName; 
  string _userName;
  string _email;
  bool _active;
  string _pwd;

public:
  // usually constructor is public
  User(int id, string fullName, string userName, string email, string pwd, bool active=false ){  // default value
    _id = id;
    _fullName = fullName;
    _userName = userName;
    _email = email;
    _pwd = pwd;
    _active = active;
  }

  void show() {
    if(_active) cout << "Active user" << endl;
    else cout << "Inactive user" << endl;
  }
  bool validate(string username, string pwd){
    if (username == _userName && pwd == _pwd) return true;
    return false;
  }
private:
  // User(){
  //   _active = false;
  // }
  void Inactive() {
    _active = false;
  }
};

vector<User> users;

bool login(string userName, string pwd){
  for(auto user : users){
    if (user.validate(userName, pwd)) return true;
  }
  return false;
}

int main() {
  User user1 = User(1, "frank", "fff", "f@gamil.com", "password123", true);
  users.push_back(user1);
  users.push_back(User(2, "beta", "bbb", "bbb@gmail.com", "pwd123", true));
  users.push_back(User(3, "beta", "ccc", "bbb@gmail.com", "pwd12323", true));
  users.push_back(User(4, "beta", "ddd", "bbb@gmail.com", "pwd12323", true));
  users.push_back(User(5, "beta", "eee", "bbb@gmail.com", "pwd13223", true));
  if(login("fff", "password123")){
    cout << "login successfully" << endl;
  }
  else {
    cout << "sorry. login failed" << endl;
  }
}