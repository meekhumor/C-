// We traverse in reverse order, val 1 is calculated first

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
    system("cls");
    string s = "-/*+79483"; // prefix

    // One stack for values
    stack<int> val;
    for(int i=s.length()-1; i>=0; i--){
        // check if s[i] is a digit or operator
        if(s[i]>=48 && s[i]<=57){ // digit
            val.push(s[i]-48);
        }
        else {
            int val1 = val.top(); // val2 is calculated first
            val.pop();
            int val2 = val.top();
            val.pop();
            int ans = solve(val1, val2, s[i]);
            val.push(ans);
        }  
    }
    cout<<val.top()<<endl;
    return 0;
}