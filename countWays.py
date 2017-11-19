#DIRECTI 2017 written round question   
#Given an positive integer n. Count the different numbers that can be generated using 
#digits 1, 2, 3 and 4 such that digits sum is the number ‘n’. Here digit ‘4’ will be 
#treated as ‘1’.

def countWays(num):
	dp=[0*i for i in range(num+1)]
	list=[1,2,3,1]
	dp[0]=0
 
	for i in range(1,num+1):
		for j in list:
			if(i==j):
				dp[i]+=1
			elif(i>j):
				dp[i]+=dp[i-j]
 
	print(dp[num])
 
num=3
countWays(num)
