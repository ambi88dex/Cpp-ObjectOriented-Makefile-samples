#include "Graph.h"

Graph::Graph(int n,int m, int M)
{
	
	vertices_count=n;
	edges_count=m;
	max_color_ct=M;
	matrix.resize(n);
	for(int i=0;i<n;i++)
	{
		matrix[i].resize(n);
	}
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			matrix[i][j]=false;
		}
	}
	vex.clear();
	for(int i=0;i<n;i++)
	{
		Vertices temp(i);
		vex.push_back(temp);
	}
}

void Graph::addEdge(int i, int j)
{
	matrix[i][j]=true;
	matrix[j][i]=true;
	Edge temp(i,j);
	ex.push_back(temp);
}

void Graph::showEdges()
{
	for(auto it:ex)
	{
		
		cout<<it.getVertices().first<<" "<<it.getVertices().second<<endl;
	}
}

void Graph::showVertices()
{
	for(auto it:vex)
	{
		cout<<it.getVertexId()<<" "<<it.getColorId()<<endl;
	}
}

ll Graph::colouringCount()
{
	colouring(0);
	ll prod=1;
	for(auto it:vex)
	{
		prod*=it.getTotalColours();
	}
	return prod;
}

void Graph::colouring(int v_i)
{
	set<int>c_nghbrs;
	for(ll i=0;i<vertices_count;i++)
	{
		if(matrix[v_i][i])
		{
			if(vex[i].getColorId()!=-1)
			{
				c_nghbrs.insert(vex[i].getColorId());	
			}
		}
	}
	int vertex_clr=0;
	while (c_nghbrs.find(vertex_clr)!=c_nghbrs.end())
	{
		vertex_clr++;
	}
	vex[v_i].updateColor(vertex_clr);
	vex[v_i].updateTotalColours(max_color_ct - c_nghbrs.size());
	for(ll i=0;i<vertices_count;i++)
	{
		if(matrix[v_i][i])
		{
			if(vex[i].getColorId()	==-1)
			{
				colouring(i);	
			}
		}
	}
}

void Graph::showVertexStatus()
{
	for(auto it:vex)
	{
		cout<<it.getVertexId()<<" "<< it.getColorId()<<" "<<it.getTotalColours()<<endl;
	}
	
}

void Graph::display()
{
	for(int i=0;i<matrix.size();i++)
	{
		for(int j=0;j<matrix.size();j++)
		{
			cout << matrix[i][j]<< " ";
		}
		cout<<endl;
	}
	cout<<endl;
	showVertexStatus();
}