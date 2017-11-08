#include "Vertices.h"

Vertices::Vertices(int vi)
{
	vertex_id=vi;
	color_id=-1;
}

void Vertices::updateColor(int color)
{
	color_id=color;
}

int Vertices::getColorId()
{
	return color_id;
}

int Vertices::getVertexId()
{
	return vertex_id;
}

ll Vertices::getTotalColours()
{
	return no_of_colors;
}

void Vertices::updateTotalColours( ll update)
{
	no_of_colors=update;
}