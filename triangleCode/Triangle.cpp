/* -- this is a FILEHEADER COMMENT --
	NAME	:	
	PURPOSE :	

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cmath>
#include "Triangle.h"


Triangle::Triangle()
{
	sideA = 0;
	sideB = 0;
	sideC = 0;

	angleAB = 0;
	angleBC = 0;
	angleCA = 0;

	origin = 0;
	positionX = 0;
	positionY = 0;
}



double Triangle::hypotenuseCalc(double sideOne, double sideTwo)
{
	double hypotenuse = 0;

	hypotenuse = sqrt((sideOne * sideOne) + (sideTwo * sideTwo));

	return hypotenuse;
}


double Triangle::areaCalc(double sideOne, double sideTwo)
{
	double area = 0.0;

	area = (sideOne * sideTwo) / 2;

	return area;
}



double Triangle::thirdAngleCalc(double angleOne, double angleTwo)
{
	double thirdAngle = 0.0;
	
	thirdAngle = 180 - (angleOne + angleTwo);

	return thirdAngle;
}

double Triangle::perimeterCalc(double sideOne, double sideTwo, double sideThree)
{
	double perimeter = 0.0;

	perimeter = sideOne + sideTwo + sideThree;

	return perimeter;
}


int Triangle::distanceFromOriginCalc(int x, int y)
{
	int distance = 0;



	return distance;
}



