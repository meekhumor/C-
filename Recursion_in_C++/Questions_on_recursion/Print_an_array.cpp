#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n, int i)
{
    if(i==n) return;
    cout<<arr[i]<<" ";
    display(arr,n ,i+1);
}
int main()
{
    system("cls");
    int  n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of array: ";

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    display(arr,n,0);
    return 0;
}