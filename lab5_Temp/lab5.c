/*
	Author: Max Novak
	Date: 9/16/2018
	CS 1 Lab 5 - Temp
	Pseudo Code
	Phase 1:
		- fahren1, fahren2, fahren3, fahren4, celsius_ratio
		- fahrenFreeze, celsFreeze
	Phase 2: 
		- double fahrenheit[10];
		- double farhen_to_celsius[10];
		- int fahren_freeze[10];
		- int cels_freeze[10];
	Phase 3:
		I. Take user input
		II. Preform calculation
		III. Output result
	Phase 4:
		I.
			a. Take in user input as a double 4 times
			b. store the data into a double array
		II. 
			a. loop over all inputted values
			b. preform C = (5/9)*(Fahrenheit-32)
			c. Calc freezing point for fahren
			d. Calc freezing point for cels
		III.
			a. Print data columns
			b. print fahren, cels, FtoFreeze, and CtoFreeze
*/

#include <stdio.h>

int main()
{
	//declared variables used for iterations
	int i, j;
	//inital F*
	double fahrenheit[4];
	//C* values
	double fahren_to_celsius[4];
	//Distance from freeze
	double fahren_freeze[4];

	//MOTD banner
	puts("Welcome to the farhenheit to celsius converter");
	puts("Enter 4 farhenheit values");
	puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

	//iterate through each buffer value
	for(i = 0; i < 4; i++)
	{
		//place user input into a buffer
		printf("%s", "Please enter a Fahrenheit temperature: ");
		fscanf(stdin, "%lf", &fahrenheit[i]);
	}

	//iterate through each buffer value
	for(j = 0; j < 4; j++)
	{
		//fahren_to_celsius[j] = (5/9)*(fahrenheit[j]-32); <--doesnt work?
		//complete conversion from F* to C*
		//complete math to find distance of F* from freezing
		fahren_to_celsius[j] = (fahrenheit[j]-32) * 5 / 9;
		fahren_freeze[j] = fahrenheit[j]-32;
	}

	//print well formatted table with Fahrenheit, Celsius, FtoFreeze, and CtoFreeze
	printf("%15s %15s %15s %15s\n", "Fahrenheit", "Celsius", "FtoFreeze", "CtoFreeze");
	printf("%15.2lf %15.2lf %15.2lf %15.2lf\n", fahrenheit[0], fahren_to_celsius[0], fahren_freeze[0], fahren_to_celsius[0]);
	printf("%15.2lf %15.2lf %15.2lf %15.2lf\n", fahrenheit[1], fahren_to_celsius[1], fahren_freeze[1], fahren_to_celsius[1]);
	printf("%15.2lf %15.2lf %15.2lf %15.2lf\n", fahrenheit[2], fahren_to_celsius[2], fahren_freeze[2], fahren_to_celsius[2]);
	printf("%15.2lf %15.2lf %15.2lf %15.2lf\n", fahrenheit[3], fahren_to_celsius[3], fahren_freeze[3], fahren_to_celsius[3]);

	//return with no error code
	return 0;
}