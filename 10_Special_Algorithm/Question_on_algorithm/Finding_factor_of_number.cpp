#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("clear");
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> v;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (n != sqrt(n))
                v.push_back(n / i);
        }
    }

    cout << endl;
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}