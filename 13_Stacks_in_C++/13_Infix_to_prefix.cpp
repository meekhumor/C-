// Prefix -> op val1 val2
// Infix -> val1 op val2
// Postfix -> val1 val2 op

#include <bits/stdc++.h>
using namespace std;

int priority(char a)
{
    if(a == '+' || a == '-') return 1;
    else return 2;
}
string solve(string a, string b, char ch)
{
    string s = "";
    s.push_back(ch);
    s += a;
    s += b;
    return s;
}
int main()
{
    system("clear");
    string s = "(7+9)*4/8-3"; // prefix

    // two stacks one for numbers and one for operators
    stack<string> val;
    stack<char> op;

    for(int i=0; i<s.length(); i++){
        // check if s[i] is a digit or operator
        if(s[i]>=48 && s[i]<=57){ // digit
            val.push(to_string(s[i]-48));
        }
        else {
            if(op.size() == 0) op.push(s[i]);
            else if (s[i] == '(') op.push(s[i]);
            else if (op.top() == '(') op.push(s[i]);
            else if(s[i] == ')'){
                while (op.top()!= '('){
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top(); 
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.pop(); // "(" ko uda diya
            }
            else if (priority(s[i]) > priority(op.top())) op.push(s[i]);
            else{
                while(op.size()!= 0 && priority(s[i]) <= priority(op.top())){
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top(); 
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }  
    }
    // operator stack can have values, so make it empty
    while (op.size()>0){
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top(); 
        val.pop();
        string ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
    return 0;
}