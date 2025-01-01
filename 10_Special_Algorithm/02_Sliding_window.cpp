#include <bits/stdc++.h>
using namespace std;

// Maximum sum of sub array;

int main()
{
    system("clear");
    int arr[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int maxSum = INT16_MIN;

    // Optimal:

    // We have sum of previous of previous window, so we just need to substract a number from previous window and add a number
    // from current window to get sum of current window.

    // current window sum = previous window sum + last element of current window - first element of previous window

    int prevSum = 0;
    for (int i = 0; i < k; i++)
    {
        prevSum += arr[i];
    }

    maxSum = prevSum;
    int i = 1;
    int j = k;
    while (j < n)
    {
        int currSum = prevSum + arr[j] - arr[i - 1];
        if (maxSum < currSum)
        {
            maxSum = currSum;
        }
    }

    // Brute force:

    // for (int i = 0; i <= n - k; i++)
    // { // we made a window of size k
    //     int sum = 0;
    //     for (int j = i; j < i - k; j++)
    //     {                  // we are moving further
    //         sum += arr[j]; // sum of all element in window
    //     }
    //     maxSum = max(maxSum, sum); // maximum sum of among all subarray
    // }

    // return 0;
}