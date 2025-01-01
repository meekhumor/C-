#include <bits/stdc++.h>
using namespace std;

void pushAtBottom(stack<int> &st, int val){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

void displayrec(stack<int> &st){
    if(st.size()==0){
        return;
    }
    int x = st.top();
    st.pop();
    displayrec(st);
    cout<<x<<" ";
    st.push(x);
}

void reverseRec(stack<int> &st){
    if(st.size()==1){
        return;
    }
    int x = st.top();
    st.pop();
    reverseRec(st);
    pushAtBottom(st,x);
}

int main()
{
    system("clear");
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    displayRec(st);
    reverseRec(st);
    displayRec(st);
    
    return 0;
}