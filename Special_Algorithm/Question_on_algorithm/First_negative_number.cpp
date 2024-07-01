#include <bits/stdc++.h>
using namespace std;

// we have to find array of negative number from every window of size k;

int main()
{
    system("cls");
    vector<int> v;
    int arr[] = {2, -3, 4, 4, -7, -1, 4, -2, 6}; // Ans should be: {-3,-3,-7,-7,-7,-1,-2}
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    int prevNegIdx = 0;

    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            v.push_back(arr[i]);
            prevNegIdx = i; // we will find first negative number idx in first window
            break;
        }
    }

    int i = 1;
    while (i < n - k + 1)
    {
        if (prevNegIdx >= i) // we will see if our previous negative number idx is still in current window
        {
            v.push_back(arr[prevNegIdx]);
        }
        else // if not then we will again find first negative number idx in current window
        {
            for (int j = i; j < i + k; j++)
            {
                if (arr[j] < 0)
                {
                    v.push_back(arr[j]);
                    prevNegIdx = j;
                    break;
                }
            }
        }
        i++;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}