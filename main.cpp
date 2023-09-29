#include "Cylinder.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//creating the cylinder with values for height and radius
	Cylinder c;
	c.setRadius(3.0);
	c.setHeight(3.0);
	
	//output for the cylinder's properties
	std::cout << "Radius: " << c.getRadius() << std::endl;
	std::cout << "Height: " << c.getHeight() << std::endl;
	std::cout << "Volume: " << setprecision(6) << c.calculateVolume() << std::endl;
	std::cout << "Surface Area: " << setprecision(6) << c.calculateSurfaceArea() << std::endl;
	
	return 0;
}
