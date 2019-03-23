class AdjNode():
	"""docstring for AdjNode"""
	def __init__(self, data):
		super(AdjNode, self).__init__()
		self.vertex = data
		self.next = None
		


class Graph():
	"""docstring for Graph"""
	def __init__(self, vertices):
		super(Graph, self).__init__()
		self.V = vertices
		self.graph = [None]*self.V

	def add_edge(self,src,dest):
		node = AdjNode(dest)
		node.next = self.graph[src]
		self.graph[src] = node

		node = AdjNode(src)
		node.next = self.graph[dest]
		self.graph[dest] = node

	def print_graph(self):
		for i in range(self.V):
			print("Adjacency list of vertex {}\n head".format(i), end="")
			temp = self.graph[i]
			while temp:
				print(" -> {}".format(temp.vertex),end="")
				temp = temp.next
			print("\n")
		

if __name__ == '__main__':
	V = 5
	graph = Graph(V)
	graph.add_edge(0,1);
	graph.add_edge(0,4);
	graph.add_edge(1,2);
	graph.add_edge(1,3);
	graph.add_edge(1,4);
	graph.add_edge(2,3);
	graph.add_edge(3,4);

	graph.print_graph()