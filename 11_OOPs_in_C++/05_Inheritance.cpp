// Inheritance is a feature or a process in which, new classes are created from the existing classes

#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int Age;
    string Gender;

protected:
    string Name; // by making it protected, it can be used in child classes

public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
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
class Developer : public Employee // public because we can access functions in employee class now
{
public:
    string FavProgrammingLanguage;
    Developer(string name, int age, string gender, string favProgrammingLanguage) : Employee(name, age, gender)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBug()
    {
        cout << Name << " has fixed bugs!!"; // I can use Name since it is protected
    }
};

int main()
{
    system("clear");

    Developer d = Developer("Om", 18, "Male", "C++");
    d.fixBug();
    cout << endl;
    d.Introduce();

    return 0;
}
