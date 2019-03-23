#include <bits/stdc++.h>
using namespace std;
class Graph{
	int V;
	vector<int> *adj;
public:
	Graph(int V);

	void addEdge(int u,int v);

	void BFS(int s);
};

Graph::Graph(int V){
	this->V = V;
	adj = new vector<int>[V];
}

void Graph::addEdge(int u,int v){
	adj[u].push_back(v);
}

void Graph::BFS(int s){
	vector<bool> visited(V,false);
	queue<int> q;
	visited[s] = true;
	q.push(s);
	while(!q.empty()){
		s = q.front();
		cout << s << " ";
		q.pop();
		for (int i = 0;i<adj[s].size();i++)
		{
			if (visited[adj[s][i]]==false)
			{
				visited[adj[s][i]]=true;
				q.push(adj[s][i]);
			}
		}
	}
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
	cout << "BFS of Given Graph is : ";
	g.BFS(2);
	return 0;
}