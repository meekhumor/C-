#include <bits/stdc++.h>
using namespace std;

int priority(char a)
{
    if(a == '+' || a == '-') return 1;
    else return 2;
}
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
    string s = "(7+9)*4/8-3"; // infix

    // two stacks one for numbers and one for operators
    stack<int> val;
    stack<char> op;

    for(int i=0; i<s.length(); i++){
        // check if s[i] is a digit or operator
        if(s[i]>=48 && s[i]<=57){ // digit
            val.push(s[i]-48);
        }
        else {
            if(op.size() == 0) op.push(s[i]);
            else if (s[i] == '(') op.push(s[i]);
            else if (op.top() == '(') op.push(s[i]);
            else if(s[i] == ')'){
                while (op.top()!= '('){
                    char ch = op.top();
                        op.pop();
                        int val2 = val.top();
                        val.pop();
                        int val1 = val.top(); 
                        val.pop();
                        int ans = solve(val1, val2, ch);
                        val.push(ans);
                }
                op.pop(); // "(" ko uda diya
            }
            else if (priority(s[i]) > priority(op.top())) op.push(s[i]);
            else{
                while(op.size()!= 0 && priority(s[i]) <= priority(op.top())){
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top(); 
                    val.pop();
                    int ans = solve(val1, val2, ch);
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
        int val2 = val.top();
        val.pop();
        int val1 = val.top(); 
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
    return 0;
}