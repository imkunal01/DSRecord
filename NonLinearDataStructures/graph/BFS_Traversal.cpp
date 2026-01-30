#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int>BFS(vector<vector<int>> adj){
    vector<bool> visited(adj.size(), false);
    queue<int> q;
    vector<int> traversal;
    visited[0] = true;
    q.push(0);
    while(!q.empty()){
        int currentNode = q.front();
        q.pop();
        traversal.push_back(currentNode);
        for(int i : adj[currentNode]){
            if(!visited[i]){
                visited[i] = true;
                q.push(i);
            }
        }
    }
    return traversal;
}
int main(){

}