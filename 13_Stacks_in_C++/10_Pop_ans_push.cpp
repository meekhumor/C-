#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreatest(vector<int>arr)
{
    int n = arr.size();
    stack<int> st;
    vector<int> ans(n);
    ans[n-1] = -1;
    st.push(arr[n-1]);
    for(int i=n-2; i>=0; i--){
        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }
        if(st.empty()) ans[i] = -1;
        else ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}
int main()
{
    system("clear");
    vector<int> v{3,1,2,5,4,6,2,3};
    v = nextGreatest(v);
    for (int i = 0; i < v.size(); i++) cout<<v[i]<<" ";
    return 0;
}