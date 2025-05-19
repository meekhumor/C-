#include <bits/stdc++.h>
using namespace std;

vector<int> get_digits(int n) {
    vector<int> digits;
    while (n > 0) {
        digits.push_back(n % 10);
        n /= 10;
    }
    return digits;
}

int helper(int n, vector<int>& dp) {
    if (n == 0) return 0;
    if (dp[n] != -1) return dp[n];

    vector<int> digits = get_digits(n);
    int ans = INT_MAX;

    for (int i = 0; i < digits.size(); i++)
    {
        ans = min(ans, helper(n - digits[i], dp));
    }
    
    return dp[n] = 1 + ans;
}

int main() {
    system("cls");
    int n;
    cout << "Enter a number: ";
    cin >> n;   
    vector<int> dp(n + 1, -1);

    cout << helper(n, dp) << endl;

    return 0;
}