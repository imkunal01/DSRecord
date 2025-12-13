#include<bits/stdc++.h>
using namespace std;

int main(){
    int vertex,edge;
    cin>>vertex>>edge;
    vector<vector<bool>> Adj(vertex,vector<bool>(vertex,0));
    int u,v;
    for(int i = 0;i<edge;i++){
        cin>>u>>v;
        Adj[u][v] =1;
        Adj[v][u] =1;
    }
}