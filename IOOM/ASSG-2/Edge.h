#ifndef _EDGE_H
#define _EDGE_H

#include "base.h"

class Edge
{
	int source_id;
	int sink_id;
	public:
		Edge(int,int);
		pair<int,int>getVertices();
};

#endif