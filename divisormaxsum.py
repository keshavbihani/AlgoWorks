#Maximum sum after repeatedly dividing N by a divisor
import math

def minimumDivisor(n):
	val = math.floor(math.sqrt(n))
	for i in range(2,val+1):
		if n%i==0:
			return i
	return n
	
def maxSumofDivisor(n):
	sum=n
	while(n>1):
		x = minimumDivisor(n)
		n/=x
		sum+=n
	return sum	

n=34

print(maxSumofDivisor(n))
