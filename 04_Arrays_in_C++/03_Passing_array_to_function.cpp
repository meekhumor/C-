#include<iostream>
using namespace std;

void display(int a[], int size) // Function
{
    for (int i = 0; i <= size-1; i++)
    {
        cout<<a[i]<<" ";
    }
    return;
}
void change(int b[], int size)
{
    b[0]=50;
}
int main()
{
    system("clear");

    int arr[5] = {1,4,2,7,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    // accessing the elements of array in another function 

    display (arr, size); // callng the function
    change (arr, size); // this function change the value of arr[0] by using b[0], because both are same array
    cout<<"\n";
    display (arr, size);
}

// Note: in case of array function, values are pass with reference(address)