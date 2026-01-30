#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to perform BFS on the graph
vector<int> BFS(int startNode, vector<vector<int>>& adjList) {
    vector<bool> visited(adjList.size(), false);
    queue<int> q;
    vector<int> traversal;

    visited[startNode] = true;
    q.push(startNode);

    while (!q.empty()) {
        int currentNode = q.front();
        q.pop();

        traversal.push_back(currentNode);

        for (int neighbor : adjList[currentNode]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    return traversal;
}

bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(), false);
        queue<int> q;
        visited[0] = true;
        q.push(0);
        
        while(!q.empty()) {
            int currentNode = q.front();
            q.pop();
            for(int i : rooms[currentNode]) {
                if(!visited[i]) { 
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
        
        
        for(bool v : visited) {
            if(!v) return false;
        }
        return true;
    }

int main() {
    // Number of nodes and edges
    int n = 6; // Number of nodes (0 to 5)
    vector<vector<int>> adjList(n);

    // Adding edges to the adjacency list
    adjList[0] = {1, 2};
    adjList[1] = {0, 3, 4};
    adjList[2] = {0, 5};
    adjList[3] = {1};
    adjList[4] = {1, 5};
    adjList[5] = {2, 4};

    int startNode = 0; // Starting node for BFS
    BFS(startNode, adjList);

    return 0;
}
