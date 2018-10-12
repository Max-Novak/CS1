#include <stdio.h>

double fahren_to_celsius(double fahrenheit);
double fahren_to_freeze(double fahrenheit);
void puts_fahrenheit();
void temperature_print(double fahrenheit, double celsius, double f_to_freeze, double c_to_freeze);

int main()
{
	//declare fahrenheit variables
	double fahrenheit1;
	double fahrenheit2;
	double fahrenheit3;
	double fahrenheit4;
	//declare fahren to celsius variables
	double fahren_to_celsius1;
	double fahren_to_celsius2;
	double fahren_to_celsius3;
	double fahren_to_celsius4;
	//declare fahren to freeze
	double fahren_freeze1;
	double fahren_freeze2;
	double fahren_freeze3;
	double fahren_freeze4;

	//MOTD banner
	puts("Welcome to the farhenheit to celsius converter");

	//function blocks to calculate values
	/**************************************/
	puts_fahrenheit();
	scanf("%lf", &fahrenheit1);
	fahren_to_celsius1 = fahren_to_celsius(fahrenheit1);
	fahren_freeze1 = fahren_to_freeze(fahrenheit1);

	puts_fahrenheit();
	scanf("%lf", &fahrenheit2);
	fahren_to_celsius2 = fahren_to_celsius(fahrenheit2);
	fahren_freeze2 = fahren_to_freeze(fahrenheit2);

	puts_fahrenheit();
	scanf("%lf", &fahrenheit3);
	fahren_to_celsius3 = fahren_to_celsius(fahrenheit3);
	fahren_freeze3 = fahren_to_freeze(fahrenheit3);

	puts_fahrenheit();
	scanf("%lf", &fahrenheit4);
	fahren_to_celsius4 = fahren_to_celsius(fahrenheit4);
	fahren_freeze4 = fahren_to_freeze(fahrenheit4);

	//print well formatted table with Fahrenheit, Celsius, FtoFreeze, and CtoFreeze
	printf("%15s %15s %15s %15s\n", "Fahrenheit", "Celsius", "FtoFreeze", "CtoFreeze");
	temperature_print(fahrenheit1, fahren_to_celsius1, fahren_freeze1, fahren_to_celsius1);
	temperature_print(fahrenheit2, fahren_to_celsius2, fahren_freeze2, fahren_to_celsius2);
	temperature_print(fahrenheit3, fahren_to_celsius3, fahren_freeze3, fahren_to_celsius3);
	temperature_print(fahrenheit4, fahren_to_celsius4, fahren_freeze4, fahren_to_celsius4);

	//return with no error code
	return 0;
}

/******************************************
*	fahren_to_celsius					  *
******************************************/
double fahren_to_celsius(double fahrenheit)
{
	double celsius;
	celsius = (fahrenheit-32) * 5 / 9;
	return celsius;
}

/******************************************
*	fahren_to_freeze					  *
******************************************/
double fahren_to_freeze(double fahrenheit)
{
	double fahren_freeze;
	fahren_freeze = fahrenheit-32;
	return fahren_freeze;
}

/******************************************
*	puts_fahrenheit    					  *
******************************************/
void puts_fahrenheit()
{
	puts("Enter a farhenheit values");
	puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}

/******************************************
*	gets_fahrenheit		      			  *
******************************************/
void temperature_print(double fahrenheit, double celsius, double f_to_freeze, double c_to_freeze)
{
	printf("%15.2lf %15.2lf %15.2lf %15.2lf\n", fahrenheit, celsius, f_to_freeze, c_to_freeze);
}