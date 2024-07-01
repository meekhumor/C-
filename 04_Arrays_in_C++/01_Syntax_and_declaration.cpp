#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout<< "Enter number of arrays you want to form: ";
    cin>>n;

    int arr[n];
    cout<<"Enter your values: ";
    for (int i = 0; i <= n-1; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i]<<"\n";
    }
    
}