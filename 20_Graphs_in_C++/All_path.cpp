#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> all_paths;
int v;

void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void dfs(int curr, int end, vector<int> &path) {
    if(curr == end){
        path.push_back(curr);
        all_paths.push_back(path);
        path.pop_back();
        return;
    };
    visited.insert(curr);
    path.push_back(curr);
    for(auto neighbour : graph[curr]) {
        if(not visited.count(neighbour)) {
            dfs(neighbour, end, path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}

void allPath(int src, int dest) {
    vector<int> v;
    dfs(src, dest, v);
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
        add_edge(src, dest);
    }

    int x, y;
    cin>>x>>y;
    allPath(x, y);

    for(auto path : all_paths) {
        for(auto el : path) {
            cout<<el<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}