#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
     
}
int main()
{
    system("cls");
    vector<int> v;

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter any "<<n<<" "<<"values: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    cout<<endl;
    int i = 0;
    int j = v.size()-1;
    while (i<=j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    display(v);
    
    
}
