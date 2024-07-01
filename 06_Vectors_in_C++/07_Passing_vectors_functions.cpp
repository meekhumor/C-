#include<iostream>
#include<vector>
using namespace std;

void change(vector<int> &a) // a--> 9 10 6 1 [&a: for pass by reference]
{
    a[0] = 100; // a--> 100 10 6 1
}

int main()
{
    system("cls");
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
  
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" "; // same result as there is no change in vector v
    }
}

// Note: vecors are pass by value. each time you pass, new vector is created
// for pass by reference use '&'