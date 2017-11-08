#ifndef _GRAPH_H
#define _GRAPH_H

#include "base.h"
#include "Vertices.h"
#include "Edge.h"

class Graph
{
	vector<vector<bool> >matrix;
	int vertices_count;
	int edges_count;
	int max_color_ct;
	vector<Vertices>vex;
	vector<Edge>ex;
	public:
		Graph(int,int,int);
		void addEdge(int,int);
		ll colouringCount();	
		void showEdges();
		void showVertices();
		void colouring(int);
		void showVertexStatus();
		void display();
};

#endif