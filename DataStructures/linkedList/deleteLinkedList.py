class Node:
	def __init__(self,data):
		self.data = data
		self.next = None

class LinkedList:

	def __init__(self):
		self.head = None

	def push(self,new_data):
		new_node = Node(new_data)
		new_node.next = self.head
		self.head = new_node

	def deleteNodePosition(self,position):
		temp = self.head
		if self.head is None:
			return

		if position == 0:
			self.head = temp.next
			temp = None
			return

		prev = temp			
		for i in range(1,position):
			temp = temp.next
			if temp is None:
				break

		if temp is None:
			return

		if temp.next is None:
			return

		nex = temp.next.next
		temp.next = None
		temp.next = nex


	def deleteNode(self,key):

		temp = self.head
		if temp is not None:
			if temp.data == key:
				self.head = temp.next
				temp = None
				return

		while temp is not None:
			if temp.data == key:
				break
			prev = temp
			temp = temp.next


		if temp == None:
			return

		prev.next = temp.next
		temp = None

	def printList(self):
		temp = self.head
		while temp:
			print(temp.data)
			temp = temp.next

if __name__ == '__main__':

	llist = LinkedList()
	llist.push(7)
	llist.push(1)
	llist.push(3)
	llist.push(2)
	print("Created Linked List: ")
	llist.printList()
	llist.deleteNodePosition(0)
	print("\nLinked List after Deletion of 1: ")
	llist.printList()