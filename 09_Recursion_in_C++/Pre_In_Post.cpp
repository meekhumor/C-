#include <bits/stdc++.h>
using namespace std;

void pip(int n)
{
    if(n==0) return;
    cout<<"Pre "<<n<<endl;
    pip(n-1);
    cout<<"In "<<n<<endl;
    pip(n-1);
    cout<<"Post "<<n<<endl;
}
int main()
{
    system("cls");
    pip(3);
    return 0;
}

// Call Stack Method
// Pre 3

    // Pre 2

        // Pre 1
        // In 1
        // Post 1

    // In 2

        // Pre 1
        // Post 1
        // Post 1

    // Post 2

// In 3

    // Pre 2

        // Pre 1
        // In 1
        // Post 1

    // In 2

        // Pre 1
        // In 1
        // Post 1

    // Post 2

// Post 3