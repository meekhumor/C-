#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b, char ch)
{
    if(ch == '+') return a+b;
    else if(ch == '-') return a-b;
    else if(ch == '*') return a*b;
    else return a/b;
}

int main()
{
    system("clear");
    string s = "79+4*8/3-"; // postfix

    // One stack for values
    stack<int> val;
    for(int i=0; i<s.length(); i++){
        // check if s[i] is a digit or operator
        if(s[i]>=48 && s[i]<=57){ // digit
            val.push(s[i]-48);
        }
        else {
            int val2 = val.top(); // val2 is calculated first
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans = solve(val1, val2, s[i]);
            val.push(ans);
        }  
    }
    cout<<val.top()<<endl;
    return 0;
}