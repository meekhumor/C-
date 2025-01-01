#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("clear");
    priority_queue<int, vector<int>, greater<int>> pq; //minHeap
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(80);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    return 0;
}