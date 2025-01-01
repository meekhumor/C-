#include<iostream>
#include<vector>
using namespace std;

int main()
{
    system("clear");
    vector<int> v;

    v.push_back(6); // 1 1
    v.push_back(1); // 2 2
    v.push_back(9); // 3 4
    v.push_back(10); // 4 4
    v.push_back(9); // 5 8
    v.push_back(10); // 6 8
    v.push_back(1); // 7 8
    v.push_back(9); // 8 8
    v.push_back(10); // 9 16
    v.push_back(9); // 10 16
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);

    cout<<"Size is "<<v.size()<<endl;
    cout<<"Capacity is "<<v.capacity()<<endl; // capacity is always in the form 2^n

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<"After popback :"<<endl;
    cout<<"Size is "<<v.size()<<endl;
    cout<<"Capacity is "<<v.capacity(); // after popback capacity remains same
}
