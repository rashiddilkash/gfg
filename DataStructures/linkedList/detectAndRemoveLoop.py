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

	def swapNode(self,x,y):
		if x == y:
			return

		prevX = None
		currX = self.head
		prevY = None
		currY = self.head

		while currX and currX.data is not x:
			prevX = currX
			currX = currX.next


		while currY and currY.data is not y:
			prevY = currY
			currY = currY.next

		if currY is None or currX is None:	
			return

		if prevX is not None:
			prevX.next = currY
		else : 
			self.head = currY

		if prevY is not None:
			prevY.next = currX
		else :
			self.head = currX

		temp = currY.next
		currY.next = currX.next
		currX.next = temp

	def reverseList(self):
		prev = None
		curr = self.head
		nex = None
		if curr == None or curr.next == None:
			return
		while curr != None:
			nex = curr.next
			curr.next = prev
			prev = curr
			curr = nex

		self.head = prev

	def detectAndRemoveLoop(self):
		if self.head is None:
			return	
		if self.head.next is None:
			return

		slow = self.head
		fast = self.head
		while slow != None and fast != None:
			slow = slow.next
			fast = fast.next
			if fast != None:
				fast = fast.next
			if slow == fast:
				#print("Linked List contains loop at :")
				#print(slow.data)
				self.removeLoop(slow)
				return True
				
				#slow.next = None
				#print("Loop Removed")
		return False

	def removeLoop(self,loop_node):
		fast = loop_node
		if loop_node == self.head:
			while fast.next != self.head:
				fast = fast.next
			fast.next = None
			return
			
		slow = self.head
		while slow.next != fast.next:
			slow = slow.next
			fast = fast.next
		fast.next = None

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

	def findLength(self):
		temp = self.head
		length = 0
		while temp:
			length = length+1
			temp = temp.next
		print(length)

	def getCountRec(self,node):
		if node is None:
			return 0
		return 1+self.getCountRec(node.next)

	def getCount(self):
		return self.getCountRec(self.head)

	def printList(self):
		temp = self.head
		while temp:
			print(temp.data)
			temp = temp.next

if __name__ == '__main__':

	llist = LinkedList()
	llist.push(5)
	llist.push(4)
	llist.push(3)
	llist.push(2)
	llist.push(1)

	#print("Created Linked List: ")
	#llist.printList()
	#createing a loop
	llist.head.next.next.next.next = llist.head
	
	if(llist.detectAndRemoveLoop()):
		print("List contains Loop")
	else:
		print("List dosen't contains Loop")

	#print("Length :")
	#print(llist.getCount())
	#llist.deleteNodePosition(0)
	#llist.swapNode(3,10)
	#llist.reverseList()
	
	print("\nLinked List: ")
	llist.printList()