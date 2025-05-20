#include <bits/stdc++.h>
using namespace std;

vector<unordered_map<int,int>> graph;
int v;

void add_edge(int src, int dest,int wt, bool bi_dir = true) {
    graph[src][dest]=  wt;
    if(bi_dir){
        graph[dest][src] = wt;
    }
}

void display_graph() {
    for(int i = 0; i < graph.size(); i++) {
        cout<<i<<" -> ";
        for(auto el : graph[i]) {
            cout<<"("<<el.first<<" "<<el.second<< "),";
        }
        cout<<endl;
    }
}

int main() {
    system("clear");

    cin>>v;
    graph.resize(v, unordered_map<int, int>());

    int e;
    cin>>e;

    while(e--) {
        int src, dest, wt;
        cin>>src>>dest>>wt;
        add_edge(src, dest, wt);
    }

    display_graph();
    
    
    return 0;
}