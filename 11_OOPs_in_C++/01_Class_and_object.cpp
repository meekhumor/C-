#include <bits/stdc++.h>
using namespace std;

class Employee
{ // Employee is class
public:
    string Name;
    int Age;
    string Gender;

    void Introduce()
    {
        cout << "My Name is " << Name << endl;
        cout << "My Age is " << Age << endl;
        cout << "My Gender is " << Gender << endl;
    }
};

int main()
{
    system("clear");
    Employee employee1; // employee1 is object
    employee1.Name = "OM";
    employee1.Age = 18;
    employee1.Gender = "Male";

    employee1.Introduce();
    return 0;
}