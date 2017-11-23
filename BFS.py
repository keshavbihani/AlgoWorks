from collections import defaultdict


class Graph:
     def __init__(self):
         self.a=defaultdict(list)
    
     def add(self,b,c):
         self.a[b].append(c)
         
         
     def BFS(self,src):    
         queue=[]
         visited=[0]*len(self.a)
         
         queue.append(src)
         visited[src]=1
         while queue:
            #print queue
            u=queue.pop(0)
            print u,
            
            for i in self.a[u]:
                #print 't'+str(i)
                if visited[i]==0:
                    queue.append(i)
                    visited[i]=1
          
         
g=Graph()     
g.add(0, 1)
g.add(0, 2)
g.add(1, 2)
g.add(2, 0)
g.add(2, 3)
g.add(3, 3)

g.BFS(2)
