#include <bits/stdc++.h>
using namespace std;

void displayRec(stack<int> &st){
    if(st.size()==0){
        return;
    }
    int x = st.top();
    st.pop();
    displayRec(st);
    cout<<x<<" ";
    st.push(x);
}
int main()
{
    system("cls");
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    displayRec(st);
    
    return 0;
}