 #Determine the fewest cuts needed for palindrome partitioning of a given string.
 
 
 # your code goes here
def minimumpar(str):
	n=len(str)
	dp=[[0]*n for i in range(n)]
	
	for i in range(n):
		dp[i][i]=1;
	for len in range(2,n+1):
		for i in range(n-l+1):
			j=i+len-1
			if len==2:
				if(s[i]==s[j]):
					dp[i][j]=1
				else:
					dp[i][j]=2
			else:
				for k in range(i,j):
					dp[i][j]=min(dp[i][k]+dp[k+1][j]+1,dp[i][j])
	return dp[0][n-1]	
  
  str="ababbbabbababa"
  print(minimumpar(str))
