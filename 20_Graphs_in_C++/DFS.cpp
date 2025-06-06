#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
int v;

void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

bool dfs(int curr, int end) {
    if(curr == end) return true;
    visited.insert(curr);

    for(auto neighbour : graph[curr]) {
        if(not visited.count(neighbour)) {
            bool result = dfs(neighbour, end);
            if(result) return true;
        }
    }
    return false;
}

bool anyPath(int src, int dest) {
    return dfs(src, dest);
}


int main() {
    system("clear");

    cin>>v;
    graph.resize(v, list<int>());

    int e;
    cin>>e;
    visited.clear();

    while(e--) {
        int src, dest;
        cin>>src>>dest;
        add_edge(src, dest, false);
    }

    int x, y;
    cin>>x>>y;
    cout<<anyPath(x, y)<<endl;

    
    return 0;
}