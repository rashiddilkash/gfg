#include <bits/stdc++.h>
using namespace std;

void addEdge(std::vector<int> adj[],int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void DFSUtil(int u,vector<int> adj[],vector<bool> &visited){
	visited[u] = true;
	cout << u+1 << " ";
	for (int i = 0; i < adj[u].size(); ++i)
	{
		if (visited[adj[u][i]] == false)
		{
			DFSUtil(adj[u][i],adj,visited);
		}
	}
}

void DFS(vector<int> adj[],int V){
	vector<bool> visited(V,false);
	for (int i = 0; i < V; ++i)
	{
		if (visited[i]== false)
		{
			DFSUtil(i,adj,visited);
		}
	}
}

void printGraph(vector<int> adj[],int V){
	for (int i = 0; i < V; ++i)
	{
		cout << "Adjacency list of vertex " << i << endl;
		cout << i << " ";
		for (auto x: adj[i])
		{
			cout << x << " ";
		}
		cout << endl;
	}
}

int main(int argc, char const *argv[])
{
	int V = 5;
	vector<int> adj[V];
	addEdge(adj,0,1);
	addEdge(adj,0,4);
	addEdge(adj,1,2);
	addEdge(adj,1,3);
	addEdge(adj,1,4);
	addEdge(adj,2,3);
	addEdge(adj,3,4);
	printGraph(adj,V);
	cout << "DFS of Graph : ";
	DFS(adj,V);
	cout << endl;
	return 0;
}