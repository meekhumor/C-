// It involves selectively revealing essential information to the user while hiding non-essential implementation details. Here are the key points about data abstraction

#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee // Abstract Class
{
    virtual void AskForPromotion() = 0; // Pure virtual function
};

class Employee : AbstractEmployee
{
private: // Can't access outside of class
    string Name;
    int Age;
    string Gender;

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

    virtual void AskForPromotion()
    {
        if (Age > 30)
        {
            cout << Name << " got promoted";
        }
        else
        {
            cout << "sorry, No promotion for you";
        }
    }
};

int main()
{
    system("clear");
    Employee employee1 = Employee("Om", 18, "Male");
    Employee employee2 = Employee("John", 31, "Male");

    employee1.AskForPromotion();

    return 0;
}
