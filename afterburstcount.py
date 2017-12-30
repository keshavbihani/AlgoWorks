'''
You are given an n-ary tree with a special property: If we burst a random node of the tree,
this node along with its immediate parents up to the root vanishes. The tree has N nodes and
nodes are numbered from 1 to N. The root is always at 1. Given a sequence of queries denoting
the number of the node we start bursting, the problem is to find the number of subtrees that 
would be formed in the end according to the above property, for each query independently.
'''
from collections import defaultdict

class Graph:
    
    def __init__(self):
        self.graph=defaultdict(list)
         
    def addEdge(self,u,v):
        self.graph[u].append(v)
        
    def dfs(self,src,allParentChild):
        
        for i in self.graph[src]:
            allParentChild[i]=allParentChild[src]+(len(self.graph[src])-1)
            self.dfs(i,allParentChild)
            

g=Graph()
g.addEdge(1,2)
g.addEdge(1,3)
g.addEdge(1,4)
g.addEdge(3,5)
g.addEdge(3,6)
g.addEdge(4,7)
g.addEdge(7,8)
g.addEdge(7,9)
#print(len(g.graph[7]))
allParentChild=defaultdict(None)
allParentChild[1]=0
#print(allParentChild[1])
g.dfs(1,allParentChild) 

curr=4;
ans=allParentChild[curr]+len(g.graph[curr])
print(ans)

    
