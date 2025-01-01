#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m-1;
    int j = n-1;
    int k = m+n-1;
    while( j>=0)
    {
        if(i>=0 && nums1[i]>nums2[j]) 
        {
            nums1[k]=nums1[i];
            i--;
        }
        else 
        {
            nums1[k]=nums2[j];
            j--;
        }
        k--;
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
    int m, n;
    cout<<"Enter size of 1st array: ";
    cin>>m;

    vector<int> num1;
    cout<<"Enter any "<<m<<" elements in 1st array: ";
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        num1.push_back(x);
    }

    cout<<"Enter size of 2nd array: ";
    cin>>n;
    vector<int> num2;
    cout<<"Enter any "<<n<<" elements in 2nd array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        num2.push_back(x);
    }

    for (int i = m; i < m+n; i++)
    {
        num1.push_back(0);
    }
    merge(num1,m,num2,n);
    cout<<"Merged sorted array: ";
    display(num1);

    return 0;
}