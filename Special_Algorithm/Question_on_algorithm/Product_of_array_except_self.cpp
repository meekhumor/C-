#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums; // {1,2,3,4}
    cout << "Enter " << n << " elements of array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    vector<int> pre(nums.size());
    vector<int> suf(nums.size());

    // prefix product except first element: {1,1,2,6}

    pre[0] = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        pre[i] = nums[i - 1] * pre[i - 1];
    }

    // suffix product except last element: {24,12,4,1}

    suf[nums.size() - 1] = 1;
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        suf[i] = nums[i + 1] * suf[i + 1];
    }

    // multiplying both

    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = pre[i] * suf[i];
    }

    // display

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}

// Concept involved:
// For every element -> product of all other elements = product of all other in left * product of all other in right