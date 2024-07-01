#include<iostream>
#include<vector>
using namespace std;

int main()
{
    system("cls");
    vector<int> v; // you need not mention the size {Syntax}

    v.push_back(6);
    cout<<v.size()<<endl; // it shows the size of an array
    v.push_back(1);
    cout<<v.size()<<endl;
    v.push_back(9);
    cout<<v.size()<<endl;
    v.push_back(0);
    cout<<v.size()<<endl;

    // Note: with every pushback the size of array is increasing, which is of zero size initially

    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

    // v.capacity() : it shows the capacity of an array 
}