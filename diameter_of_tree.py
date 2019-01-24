# your code goes here
class Node:
	diameter_val=0
	def __init__(self,val):
		self.val=val
		self.left=None
		self.right=None

def traverse(node):
	if node:
		print(node.val)
		traverse(node.left)
		traverse(node.right)
	
def diameter(self,diameter_val):
	if self.left==None and self.right==None:
		return 1,1
	leftval,diameter_val = diameter(self.left,diameter_val)
	rightval,diameter_val= diameter(self.right,diameter_val)
	if leftval and rightval:
		diameter_val = max(diameter_val,leftval+rightval+1)
	return max(leftval,rightval)+1,diameter_val
		

root = Node(1) 
root.left = Node(2) 
root.right = Node(3) 
root.left.left = Node(4) 
root.left.right = Node(5) 
diameter_val=0
height,diamter_val = diameter(root,diameter_val)
print(diamter_val)
