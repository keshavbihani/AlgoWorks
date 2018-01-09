#Given a string, find its first non-repeating character

class countarr:
    
    def __init__(self):
        self.count=[0]*256
        self.index=[0]*256

def findarray(string):
    
    counting=countarr()
    for i in range(0,len(string)):
        counting.count[ord(string[i])]+=1
        
        if(counting.count[ord(string[i])]==1):
            counting.index[ord(string[i])]=i
    return counting        

def findfirstchar(string):
    arr=countarr()
    arr=findarray(string)
    #print(arr.index[ord('f')])
    
    for i in range(0,256):
        if(arr.count[i]==1):
            print(arr.index[i])
            break


string='geeksgorgeeks'
findfirstchar(string)
