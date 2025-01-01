#include <bits/stdc++.h>
using namespace std;

vector<int> stockSpan(vector<int>arr)
{
    int n = arr.size();
    stack<int> st;
    vector<int> ans(n);
    ans[0] = 1;
    st.push(0);
    for(int i=1; i<n; i++){
        while(!st.empty() && arr[st.top()] <= arr[i]){
            st.pop();
        }
        if(st.empty()) ans[i] = -1;
        else ans[i] = st.top();
        ans[i] = i - ans[i];
        st.push(i);
    }
    return ans;
}
int main()
{
    system("clear");
    vector<int> v{100,80,60,81,70,60,75,85};
    v = stockSpan(v);
    for (int i = 0; i < v.size(); i++) cout<<v[i]<<" ";
    return 0;
}