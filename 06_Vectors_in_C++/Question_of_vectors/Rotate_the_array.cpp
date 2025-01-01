#include<iostream>
#include<vector>
using namespace std;

// Rotate the given array'a' by k steps, where k is non negative.

void reverse(int i, int j, vector<int> &v)
{
    while(i<=j)
    {
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
     
}
int main()
{
    system("clear");
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

    int k;
    cout<<"Enter no. of steps: ";
    cin>>k;

    int r=k%n;

    display(v);
    cout<<endl;
    reverse(0,n-r-1,v);
    reverse(n-r, n-1,v);
    reverse(0,n-1,v);
    display(v);
    
}
