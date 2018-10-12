/*
	Author: Max Novak
	Date: 9/30/2018
	CS 1 Lab 8 - Pythagoras
	Pseudo Code
	Phase 1:
		- width, height, hypotenuse, 
	Phase 2: 
		- double width
		- double height
		- double hypotenuse
	Phase 3:
		I. Take user input
		II. Do math on the input by sending to a function?
		III. Output information and calculated data in formatted table
	Phase 4:
		I.
			a. use gets to take input for
				* height and width
		II. 
			a. Send height and width to a calc hypotenusefunction 
			b. return output
		III.
			a. print formatted table with
				* width height and hypotenuse
*/

#include <stdio.h>
//compilation requires -lm to link the math library
#include <math.h>

//function prototype
double calc_hypotenuse(double height, double width);

double calc_hypotenuse(double height, double width)
{
	double hypotenuse;
	//II.
	hypotenuse = sqrt((height*height + width*width));

	return hypotenuse;
}

int main()
{
	//declare variables
	double width;
	double height;
	double hypotenuse;

	//I.
	puts("Welcome to the right triangle hypotenuse calculator");
	puts("Please input the triangle's height");
	scanf("%lf", &height);
	puts("Please input the triangle's width");
	scanf("%lf", &width);

	//II.
	hypotenuse = calc_hypotenuse(height, width);

	//III.
	printf("The triangle's %15s %15s %15s\n", "height", "width", "hypotenuse");
	printf("               %15.2lf %15.2lf %15.2lf\n", height, width, hypotenuse);

	//return with no error codes
	return 0;
}
