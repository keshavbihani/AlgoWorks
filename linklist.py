# linklist in python

class Node:
	def __init__(self,val):
		self.val = val
		self.next=None

	def printlinklist(self):
		root=self
		while(root):
			print(root.val)
			root= root.next


root=Node(1)
root.next = Node(2)
root.next.next = Node(3)
root.next.next.next = Node(3)
root.printlinklist()
