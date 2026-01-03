<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(n, 0));

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        matrix[u][v] = 1;
        matrix[v][u] = 1; // undirected
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
=======
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
>>>>>>> 4a9d6733e646b4b245351020a85b6d2c039033d2
}