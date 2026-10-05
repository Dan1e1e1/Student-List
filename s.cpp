

#include <iostream>
#include <cstring>
#include <list>

using namespace std;
struct Student {
  char fname[10];
  char lname[10];
  int id;
  float GPA;
};
int add() {
  Student s;
    cout << "enter a first name\n";
    cin >> s.fname;
    cout << "enter a last name\n";
    cin >> s.lname;
    cout << "enter a 2 decimal GPA\n";
    cin >> s.GPA;
  return 0; 
}
int print() {
  Student s;
    cout << s.fname << " " << s.lname << " " << s.GPA;
  return 0;
}
int main() {
  char input[7];
  bool con = true;
  while (con == true) {
    cout << "\n";
    cout << "enter ADD, PRINT, DELETE, or QUIT\n";
    cin >> input;
    if (strcmp(input, "ADD") == 0) {
      add();
    } else if (strcmp(input, "PRINT") == 0) {
      print();
    } else if (strcmp(input, "DELETE") == 0) {
      cout << "DELETE";
    } else if (strcmp(input, "QUIT") == 0) {
      con = false;
    }
  }
}
