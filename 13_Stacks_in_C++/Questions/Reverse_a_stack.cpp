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

// reverse stack (using 3 stacks)
int main()
{
    system("clear");
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    
    stack<int> gt;
    stack<int> rt;
    // empty st into gt
    while(!st.empty())
    {
        gt.push(st.top());
        st.pop();
    }
    // empty gt into rt
    while(!gt.empty())
    {
        rt.push(gt.top());
        gt.pop();
    }
    // empty rt into st
    while(!rt.empty())
    {
        st.push(rt.top());
        rt.pop();
    }
    print(st);

    return 0;
}