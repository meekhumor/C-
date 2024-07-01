#include<iostream>
using namespace std;

// Given an array of marks of student, if the marks of any student is less than 35 print its roll number.

int main()
{
    system("cls");
    int n;
    cout<<"Total no. of students: ";
    cin>>n;

    int marks[n];
    cout<<"Enter there marks: ";

    for (int i = 0; i <= n-1; i++)
    {
        cin>>marks[i];
    }

    for (int i = 0; i <= n-1; i++)
    {
        if (marks[i]<35)
        {
            cout<<i+1<<" ";
        }
    }
}