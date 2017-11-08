#ifndef _VERTICES_H
#define _VERTICES_H

#include "base.h"

class Vertices
{
	int vertex_id;
	int color_id;
	ll no_of_colors;
	public:
		Vertices(int);
		int getColorId();
		void updateColor(int);
		int getVertexId();
		ll getTotalColours();
		void updateTotalColours(ll);
		// void showVertexStatus();
};

#endif