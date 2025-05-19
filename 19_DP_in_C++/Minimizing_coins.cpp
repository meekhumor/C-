#include <bits/stdc++.h>
using namespace std;

vector<int> coins;
vector<int> dp(100000, -1); 

int helper(int x){
    if(x == 0) return 0;
    if(dp[x] != -1) return dp[x];

    int result = INT_MAX;
    for(int i = 1; i <= 6; i++){
        if(x - coins[i] >= 0){
            result = min(result, helper(x - coins[i]));
        }
    }

    return dp[x] = 1+result;
}
int main() {
    system("cls");
    int n, x;
    cin>>n>>x;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        coins.push_back(temp);
    }
    cout<< helper(x) << endl;
    
    
    return 0;
}