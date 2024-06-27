#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size()-1; i++)
    {
        cout<<v[i]<<" ";
    }
}

bool sortornot(vector<int> &v)
{
    int count = 0;
    bool flag = true;
    for (int i = 0; i < v.size()-1; i++)
    {
        if(v[i]<v[i+1]) count++;
    }
    if(count == v.size()-1) flag = false;
    return flag;
}

int main()
{
    system("cls");
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> v;
    cout<<"Enter any "<<n<<" numbers in array: ";
    for (int i = 0; i < n ; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    
}