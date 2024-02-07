//bar chart in row form
#include<iostream>
using namespace std;
void bar(int a[],int n)
{
 int k;
   for(int i=0;i<n;i++)
   {
    k=i;
      for(int j=0;j<a[i];j++)
      {
          cout<<"*";
      }
      cout<<endl;
   }
}
int main()
{
   int n; 
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }
   bar(a,n);
return 0;
}        
//Second solution 

#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>

using namespace std;

// Graph class representing an undirected graph using adjacency list
class Graph {
    int V; // Number of vertices
    vector<vector<int>> adj; // Adjacency list representation of the graph

public:
    Graph(int V) : V(V), adj(V) {}

    // Function to add an edge to the graph
    void addEdge(int v, int w) {
        adj[v].push_back(w);
        adj[w].push_back(v); // Assuming undirected graph
    }

    // BFS traversal from a given source vertex
    void BFS(int source) {
        // Mark all vertices as not visited
        vector<bool> visited(V, false);

        // Create a queue for BFS
        queue<int> q;

        // Mark the current node as visited and enqueue it
        visited[source] = true;
        q.push(source);

        // Loop to traverse the graph with BFS
        while (!q.empty()) {
            // Dequeue a vertex from queue and print it
            int currentVertex = q.front();
            cout << currentVertex << " ";
            q.pop();

            // Get all adjacent vertices of the d

