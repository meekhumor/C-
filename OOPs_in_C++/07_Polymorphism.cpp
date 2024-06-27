// The word “polymorphism” means having many forms.
// In simple words, we can define polymorphism as the ability of a message to be
// displayed in more than one form.

#include <algorithm>
#include <iostream>
#include <math.h>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class Employee {
private:
  int Age;
  string Gender;

protected:
  string Name; // by making it protected, it can be used in parent classes

public:
  void setName(string name) { Name = name; }
  string getName() { return Name; }
  Employee(string name, int age, string gender) {
    Name = name;
    Age = age;
    Gender = gender;
  }
  void Introduce() {
    cout << "My Name is " << Name << endl;
    cout << "My Age is " << Age << endl;
    cout << "My Gender is " << Gender << endl;
  }

  virtual void
  work() // by making it virtual it now checks implementation of same function
         // in derived class if yes then execute that instead
  {
    cout << "This work is in Employee class";
  }
};
class Developer : public Employee // public because we can access functions in
                                  // employee class now
{
public:
  string FavProgrammingLanguage;
  Developer(string name, int age, string gender, string favProgrammingLanguage)
      : Employee(name, age, gender) {
    FavProgrammingLanguage = favProgrammingLanguage;
  }
  void fixBug() {
    cout << Name << " has fixed bugs!!"; // I can use Name since it is protected
  }
  void work() { cout << "This work is in Developer class"; }
};

int main() {
  system("cls");

  Developer d = Developer("Om", 18, "Male", "C++");
  // most common use of polymorphism is when a parent class reference is used to
  // refer a child class object
  Employee *e1 = &d;
  e1->work(); // work function of developer class is running as e1 stores the
              // reference of developer class

  return 0;
}
