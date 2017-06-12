#include<bits/stdc++.h>
using namespace std;

class Graph
{
	int Vertices; // no of vertices
	list<int> *map;
	
	Graph(int Vertices)//initialiser
	{
		this->Vertices=Vertices;
		map=new list<int>[Vertices];
	}
	
	void addEdgesToGraph(int src,int desc)
	{
		map[src].push_back(desc); //connecting src to desc
	}
	
	bool dfsTillDepth(itn src,int desc,int depthTillNow)
	{
		if(src==desc)
			return true;
		
		if(depthTillNow<=0)
			return false;
			
		for(auto i=map[src].begin();i!=map[src].end();i++)
			if(dfsTillDepth(*i,desc,depthTillNow-1))
				return true;
		
		return false;		
	}
	
	bool IDDFS(int src ,int desc ,int depth)
	{
		for(int i=0;i<depth;i++)
		{
			if(dfsTillDepth(src,desc,i))
				return true;
		}
		return false;
	}
}

int main() {
	Graph g(7);
    g.addEdgesToGraph(0, 1);
    g.addEdgesToGraph(0, 2);
    g.addEdgesToGraph(1, 3);
    g.addEdgesToGraph(1, 4);
    g.addEdgesToGraph(2, 5);
    g.addEdgesToGraph(2, 6);
 
    int target = 6, maxDepth = 3, src = 0;
    if (g.IDDFS(src, target, maxDepth) == true)
        cout << "Target is reachable from source ";
    else
        cout << "Target is NOT reachable from source for given depth";
	return 0;
}
