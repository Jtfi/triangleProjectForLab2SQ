#pragma once
/* -- this is a FILEHEADER COMMENT --
	NAME	:	AmFmRadio
	PURPOSE :	This has all the information on the AmFmRadio
				class, it includes all the data members, constants,
				and methods used in this class, it is a parent of the
				PioneerCarRadio class

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


class Triangle
{
	/* ====================================== */
	/*              PRIVATE                   */
	/* ====================================== */
private:

	int sideA;		//One side of the triangle
	int sideB;		//One side of the triangle
	int sideC;		//One side of the triangle

	double angleAB;	//Angle with sides A and B
	double angleBC;	//Angle with sides B and C
	double angleCA; //Angle with sides C and A


	/* ====================================== */
	/*              PUBLIC                    */
	/* ====================================== */
public:

	Triangle();

	double hypotenuseCalc(double sideOne, double sideTwo);


};



