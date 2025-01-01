// Constructor doesn't have return type like void, int, etc
// Constructor has same name as that of class
// Constructor should be in public access modifier

#include <algorithm>
#include <iostream>
#include <math.h>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class Employee {
public:
  string Name;
  int Age;
  string Gender;

  Employee(string name, int age,
           string gender) // for using same name use this keyword "this->Name"
  {                       // Parameterized Constructor
    Name = name;
    Age = age;
    Gender = gender;
  }
  void Introduce() {
    cout << "My Name is " << Name << endl;
    cout << "My Age is " << Age << endl;
    cout << "My Gender is " << Gender << endl;
  }
};

int main() {
  system("clear");
  Employee employee1 = Employee("Om", 18, "Male");
  Employee *ptr = &employee1; // ptr mein employee1 ka address store ho rha hai
  (*ptr).Name = "Harsh"; // (*ptr).Name == ptr->Name (Both are same)
  cout << employee1.Name;

  employee1.Introduce();

  return 0;
}