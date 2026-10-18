

#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <iomanip> 

using namespace std;
struct Student {
  char fname[10];
  char lname[10];
  int id;
  float GPA;
};
void add(vector<Student*>& data_);
void print(vector<Student*> data_);
void delete_(vector<Student*>& data_);
int main() {
  vector<Student*> data_;
  char input[7];
  bool con = true;
  while (con == true) {
    cout << "\n";
    cout << "enter ADD, PRINT, DELETE, or QUIT\n";
    cin >> input;
    if (strcmp(input, "ADD") == 0) {
      add(data_);
    } else if (strcmp(input, "PRINT") == 0) {
      print(data_);
    } else if (strcmp(input, "DELETE") == 0) {
      delete_(data_);
    } else if (strcmp(input, "QUIT") == 0) {
      con = false;
    }
  }
}
void add(vector<Student*>& data_) {
  Student* s = new Student;
  cout << "enter a first name\n";
  cin >> s->fname;
  cout << "enter a last name\n";
  cin >> s->lname;
  cout << "enter an id\n";
  cin >> s->id;
  cout << "enter a GPA\n";
  cin >> s->GPA;
  data_.push_back(s);
}
//void because this is just printing, nothing needs to be returned.
void print(vector<Student*> data_) {
    for (const auto& student : data_) {
        cout << student->fname; 
        cout << " " << student->lname; 
        cout << ", " << student->id;
        cout << setprecision(2) << fixed << ", " << student->GPA <<"\n";
    }
}
void delete_(vector<Student*>& data_) {
  int delete_id;
  cout << "What id do you want to delete?";
  cin >> delete_id;
  data_.erase(
    remove_if(data_.begin(), data_.end(), [delete_id](const Student* student) {
      if (student->id == delete_id) {
        delete student;
        return true;
      }
      return false;
    }),
    data_.end()
  );
}


