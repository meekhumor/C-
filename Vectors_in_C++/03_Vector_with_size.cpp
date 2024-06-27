#include<iostream>
#include<vector>
using namespace std;

int main()
{
    system("cls");
    vector<int> v(5,7); // initial size = 5, each element has value 7 

    cout<<"Size of vector: "<<v.size()<<endl;
    cout<<"Value of vector: "<<v[2];
}