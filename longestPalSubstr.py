#longest palindromic substring length
def longestPalSubstr(string):
    length=len(string)
    maximum=0
    for i in range(1,length):
        
        low=i-1
        high=i
        
        while(low>=0 and high <length and string[low]==string[high]):
            if maximum<high-low+1:
                maximum=high-low+1
            low-=1;
            high+=1;
        
        low=i-1
        high=i+1
        
        while(low>=0 and high <length and string[low]==string[high]):
            if maximum<high-low+1:
                maximum=high-low+1
            low-=1;
            high+=1;    
            
    return maximum        


string = "forgeeksskeegfor"
print (longestPalSubstr(string))
