# stock span problem
def stockSpan(a):
	stack=[]
	n=len(a)
	stack.append((a[0],1))
	print(1,end=" ")
	for i in range(1,n):
		span=1
		#print(a[i],span)
		while len(stack) and stack[-1][0]<a[i]:
			lower = stack.pop()
			span += lower[1]	
		stack.append((a[i],span))
		print (span,end =" ")
		#print(stack)


price = [10, 4, 5, 90, 120, 80] 
stockSpan(price)
