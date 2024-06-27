#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

// If any number has factor except 1 & n, then for sure half of factor will lie before <= sqrt(n)
// Prime number check krne k liye hum kyun 1 to n tk check kare jabki 1 to sqrt(n) mein check krna sufficient hai
// TC = O(sqrt(n)) instead of O(n)

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << isPrime(n);
    return 0;
}