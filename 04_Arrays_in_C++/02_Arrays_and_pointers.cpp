#include<iostream>
using namespace std;

int main()
{
    system("clear");
    int arr[] = {1,3,4,5};

    // int *ptr = arr;      Correct 
    // int *ptr = &arr;     Incorrect
    // int *ptr = arr[0];   Incorrect ,because now arr[0] is an integer and & is must to store address
    // int *ptr = &arr[0];  Correct

    int *ptr = arr; // pointer can have access of an entire array
    cout<<ptr<<endl;
    cout<<ptr[0]<<endl;

    ptr[0] = 8; // it is same as *ptr = 8

    for (int i = 0; i <= 3; i++)
    {
        cout<<*ptr<<" ";
        ptr++; // address is increased by 4 
    }
    
    ptr = arr; // again alloting the address of array

    ptr++; // ptr is pointing to 2nd element
    *ptr = 9; // value of 2nd element in array has changed
    ptr--; // ptr is pointing to 1st element noe

    cout<<endl;
    for (int i = 0; i <=3; i++)
    {
            cout<<*ptr<<" ";
            ptr++;
    }
     
}