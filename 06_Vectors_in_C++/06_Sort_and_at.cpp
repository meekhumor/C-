#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    system("clear");

    vector<int> v;
    v.push_back(9);
    v.push_back(7);
    v.push_back(4);
    v.push_back(0);
    
    v.at(2) = 90; // modifying the value of 3rd element
    cout<<v.at(2)<<endl; // printing the 3rd element of vector

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    
}