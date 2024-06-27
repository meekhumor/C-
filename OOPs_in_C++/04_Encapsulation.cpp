// It’s like wrapping up a gift: the data and its related functionality are neatly packaged together.

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

class Employee
{
private: // Can't access outside of class
    string Name;
    int Age;
    string Gender;

public:
    void setName(string name) // Setter
    {
        Name = name; // We can acesss Name within our class
    }
    string getName() // Getter
    {
        return Name;
    }
    Employee(string name, int age, string gender)
    {
        Name = name;
        Age = age;
        Gender = gender;
    }
    void Introduce()
    {
        cout << "My Name is " << Name << endl;
        cout << "My Age is " << Age << endl;
        cout << "My Gender is " << Gender << endl;
    }
};

int main()
{
    system("cls");
    Employee employee1 = Employee("Om", 18, "Male");
    // Employee.Name will show error

    employee1.setName("Om");
    cout << employee1.getName();

    employee1.Introduce();
    return 0;
}
