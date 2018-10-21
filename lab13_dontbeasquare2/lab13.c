/*
	Author: Max Novak
	Date: 10/20/2018
	CS 1 Lab 13 - Dontbeasquare2
	Pseudo Code
	Phase 1:
		- width, height, area, perimeter
	Phase 2: 
		- double width;
		- double height;
		- double area;
		- double perimeter;
	Phase 3:
		I. Take user input
		II. Calculate the area and perimeter
		III. Output formatted table of data
	Phase 4:
		I.
			a. Prompt user for input
			b. use scanf to take in input
				* take input for width and height
		II. 
			a. Calculate area and perimeter
		III.
			a.  Print the width, height, area, and perimeter
			b.  Continue iterating with while loop
	Questions:
		- declaring variables in functions
		- how do programs determine which type of data you inputted
			** letters break the program
*/

#include <stdio.h>

double calc_perimeter(double width, double height);
double calc_area(double width, double height);

int main()
{
	//declare variables
	double width;
	double height;
	double area;
	double perimeter;

	while(width != -1 || height != -1)
	{
		//outputs text to user and retrieves their input for width
		puts("Type -1 to quit");
		puts("Please input the rectangle's width");
		fscanf(stdin, "%lf", &width);
		if(width < 0)
			break;

		//outputs text to user and retrieves their input for height
		puts("Please input the rectangle's height");
		fscanf(stdin, "%lf", &height);
		if(height < 0)
			break;

		//calculate perimeter and area
		perimeter = calc_perimeter(width, height);
		area = calc_area(width, height);

		//print cool Ascii art
		printf("\n|||\n|||\nVVV\n\n");
		//print calculated values and input values to screen
		printf("%10s", "Height");
		printf("%10s", "Width");
		printf("%13s", "Perimeter");
		printf("%11s", "Area\n");
		printf("%10.2f %9.2f %12.2f %9.2f\n", width, height, perimeter, area);
		puts("");
	}

	//return with no error flags set
	return 0;
}

/**********************************************
* calculates the perimeter of a rectangle	  *
**********************************************/
double calc_perimeter(double width, double height)
{
	//declare
	double perimeter;

	//calculate perimeter using 2*w + 2*h formula
	perimeter = 2*width + 2*height;
	
	return perimeter;
}

/**********************************************
* calculates the area of a rectangle		  *
**********************************************/
double calc_area(double width, double height)
{
	//declare
	double area;

	//calculate area using w*h formula
	area = width * height;
	
	return area;
}