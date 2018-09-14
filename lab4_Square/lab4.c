/*
	Author: Max Novak
	Date: 9/10/2018
	CS 1 Lab 4 - Square
	Pseudo Code
	Phase 1:
		- width, height, perimeter, area
	Phase 2: 
		- double width;
		- double height;
		- double perimeter; 
		- double area;
	Phase 3:
		I. Take user input
		II. Preform calculation
		III. Output result
	Phase 4:
		I.
			a. Use fgets to securely take in user input
			b. Input will take in width and height
		II. 
			a. Multiple width and height to find area
				1. Place output into area var
			c. 2*height + 2*width to find perimeter
				1. Place output into perimeter var
		III. 
			a. printf perimeter and area to console
*/

#include <stdio.h>

int main()
{
	//declare variables
	double width;
	double height;
	double area;
	double perimeter;

	//outputs text to user and retrieves their input for width
	puts("Please input the rectangle's width");
	fscanf(stdin, "%lf", &width);

	//outputs text to user and retrieves their input for height
	puts("Please input the rectangle's height");
	fscanf(stdin, "%lf", &height);

	//calculate area using w*h formula
	area = width * height;
	//calculate perimeter using 2*w + 2*h formula
	perimeter = 2*width + 2*height;

	//print cool Ascii art
	printf("\n|||\n|||\nVVV\n\n");
	//print calculated values and input values to screen
	printf("%10s", "Height");
	printf("%10s", "Width");
	printf("%13s", "Perimeter");
	printf("%11s", "Area\n");
	printf("%10.2f %9.2f %12.2f %9.2f\n", width, height, perimeter, area);

	//return with no error flags set
	return 0;
}