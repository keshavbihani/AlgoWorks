# Print all n-digit numbers with absolute difference between sum of even and odd digits is 1
def recur(index,string,oddsum,evensum):
    if(index>n):
        return
    if(index==n):
        if(abs(oddsum-evensum)==1):
            print(string)
        return
            
    
    if(index&1):
        for i in range(0,10):
            string.append(i)
            recur(index,string,oddsum+i,evensum)
    else:
        for i in range(0,10):
            string.append(i)
            recur(index,string,oddsum,evensum+i)
        
def findNDigitNums(n):
    
    string=[]
    if(n==0):
        return 0
    elif(n==1):
        return 1
    else:
        for i in range(1,10):
            string.append(i)
            oddsum=i
            evensum=0
            recur(index+1,string,oddsum,evensum,n)


n = 3
findNDigitNums(n)
