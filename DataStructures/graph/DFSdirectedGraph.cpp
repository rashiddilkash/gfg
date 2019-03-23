#include <bits/stdc++.h>
using namespace std;

class Graph{
	int V;
	vector<int> *adj;
	void DFSUtil(int s,vector<bool> &visited);
public:
	Graph(int V);

	void addEdge(int u,int v);

	void DFS(int s);
	
};

Graph::Graph(int V){
	this->V = V;
	adj = new vector<int> [V];
}

void Graph::addEdge(int u,int v){
	adj[u].push_back(v);
}

void Graph::DFSUtil(int s,vector<bool> &visited){
	
	visited[s]=true;
	cout << s << " ";
	
	for (int i = 0; i < adj[s].size(); ++i)
	{
		if (visited[adj[s][i]]==false)
		{
			DFSUtil(adj[s][i],visited);
		}

	}
}

void Graph::DFS(int s){
	vector<bool> visited(V,false);

	DFSUtil(s,visited);
	cout << endl;
}

int main(int argc, char const *argv[])
{
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);
	cout << "DFS Traversal of given directed graph is : ";
	g.DFS(2);

	return 0;
}