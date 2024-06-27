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

    vector<int> nums; // {1,4,5,3,2,7,6}
    cout << "Enter " << n << " elements of array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    for (int i = 1; i < nums.size(); i++) // prefix sum array: {1,5,10,13,15,22,28}
    {
        nums[i] += nums[i - 1];
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}