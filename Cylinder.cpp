#include "Cylinder.h"
#include <iostream>

Cylinder::Cylinder()
{
	radius = 0;
	height = 0;
}

Cylinder::~Cylinder()
{
}
//setter for radius and height
void Cylinder::setRadius(float radius_)
{
	radius = radius_;
}
void Cylinder::setHeight(float height_)
{
	height = height_;
}
//getter for radius and height
float Cylinder::getRadius()
{
	return radius;
}
float Cylinder::getHeight()
{
	return height;
}

