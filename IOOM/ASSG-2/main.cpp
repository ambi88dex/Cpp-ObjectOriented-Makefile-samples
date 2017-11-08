/// Code written by - Anish Kelkar BT15CSE040
//  Language of implementation :- C++14

#include "Graph.h"
int main()
{
	 int V,E;
	 cout<<"Enter the number of vertices in the graph"<<endl;
	 cin>>V;
	 cout<<"Enter the number of edges in the graph"<<endl;
	 cin>>E;
	 cout<<"Enter the max number of colors available"<<endl;
	 int M;
	 cin>>M;
	 Graph g(V,E,M);

	 for(int i=0;i<E;i++)
	 {	
	 	int source,sink;
	 	cin>>source>>sink;
	 	g.addEdge(source,sink);
	 } 	
	 
	cout<<"The number of ways of coloring the graph is equal to :"<<endl;
	cout<<g.colouringCount()<<endl;
	// g.display();
	return 0;
}