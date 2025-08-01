#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to perform BFS on the graph
void BFS(int startNode, const vector<vector<int>>& adjList) {
    vector<bool> visited(adjList.size(), false); // To keep track of visited nodes
    queue<int> q; // Queue for BFS

    visited[startNode] = true; // Mark the start node as visited
    q.push(startNode); // Enqueue the start node

    cout << "BFS Traversal: ";

    while (!q.empty()) {
        int currentNode = q.front();
        q.pop();
        cout << currentNode << " "; // Process the current node

        // Explore all neighbors of the current node
        for (int neighbor : adjList[currentNode]){
            if (!visited[neighbor]) {
                visited[neighbor] = true; // Mark as visited
                q.push(neighbor); // Enqueue the neighbor
            }
        }
    }

    cout << endl;
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
