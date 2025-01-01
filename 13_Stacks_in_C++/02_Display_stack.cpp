#include <bits/stdc++.h>
using namespace std;

void print(stack<int> st)
{
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}

int main()
{
    system("clear");
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    while(st.size()>0){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}