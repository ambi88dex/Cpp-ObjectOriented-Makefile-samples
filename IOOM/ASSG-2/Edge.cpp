#include "Edge.h"

Edge::Edge(int a, int b)
{
	source_id=a;
	sink_id=b;
}

pair<int,int> Edge::getVertices()
{
	pair<int,int>ret=make_pair(source_id,sink_id);
	return ret;
}