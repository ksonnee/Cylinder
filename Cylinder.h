#include <cmath>
#include <corecrt_math_defines.h>
#include <memory>
#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
public:
	Cylinder();
	~Cylinder();
	//Constructor
	void setRadius(float radius_);
	float getRadius();
	void setHeight(float height_);
	float getHeight();

	//equation to calculate volume
	double calculateVolume() {
		return M_PI* pow(radius, 2) * height;
	}
	//equation to calculate surface area
	double calculateSurfaceArea() {
		double base = 2 * M_PI * pow(radius, 2);
		double side = 2 * M_PI * radius * height;
			return base + side;
	}

private:
	double radius;
	double height;
};

#endif // CYLINDER_H

