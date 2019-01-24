class stack:
	def __init__(self):
		self.items=[]
	
	def push(self,val):
		self.items.append(val)
		
	def pop(self):
		self.items.pop() if not self.isEmpty() else -1
	
	def top(self):
		print (self.items)
		return self.items[-1] if not self.isEmpty() else -1
			
	def isEmpty(self):
		return False if len(self.items) else True


'''
s=stack()
s.push(1)
s.push(2)
print (s.top())
s.pop()
print (s.top())
s.pop()
print (s.top())
s.pop()
'''
