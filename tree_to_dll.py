#binary tree to Doubly linkedlist
class Node:
	head = None
	prev = None
	def __init__(self,val):
		self.val=val
		self.left=None
		self.right=None
		

def convertTreeToDLL(root):
	if root==None:
		return 
	#if Node.head:
	#	print("ads "+str(Node.head.val))	
	convertTreeToDLL(root.left)
	#print(root.val)
	if not Node.head:
		Node.head = root
		#print("adsjg "+str(Node.head.val))
	else:
		#print(root.val,Node.prev.val)
		root.left = Node.prev
		Node.prev.right = root
	Node.prev = root
	convertTreeToDLL(root.right)
		
root = Node(1) 
root.left = Node(2) 
root.right = Node(3) 
root.left.left = Node(4) 
root.right.right = Node(5)
convertTreeToDLL(root)
while Node.head:
	print(Node.head.val , end = " ")
	Node.head = Node.head.right
