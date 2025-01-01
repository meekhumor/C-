#include <bits/stdc++.h>
using namespace std;

string solve(string a, string b, char ch)
{
    string s = "";
    s += a;
    s.push_back(ch);
    s += b;
    return s;
}

int main()
{
    system("clear");
    string s = "79+4*8/3-"; // postfix

    // One stack for values
    stack<string> val;
    for(int i=0; i<s.length(); i++){
        // check if s[i] is a digit or operator
        if(s[i]>=48 && s[i]<=57){ // digit
            val.push(to_string(s[i]-48));
        }
        else {
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            string ans = solve(val1, val2, s[i]);
            val.push(ans);
        }  
    }
    cout<<val.top()<<endl;
    return 0;
}