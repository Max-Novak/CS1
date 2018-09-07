/*
	Author: Max Novak
	Date: 9/1/2018
	CS 1 Lab 2 - Practice
	Pseudo Code
	Phase 1: 
		- int, long int, unsigned int, chararacter, float, double, long double  
	Phase 2:
		- int int_var;
		- long int long_int_var;
		- unsigned int u_int_var;
		- char char_var;
		- float float_var;
		- double double_var;
		- long double long_double_var;
	Phase 3:
		I. Declare variables
		II. Print the values to console
		III. end the program with no error code
	Phase 4:
		I.
			a. initilalize with values, declare with specified data types, and set meaningful identifiers
		II.
			a. print using printf
			b. format the output
		III.
			a. return with no error code
*/

//allow input/output stream manipulation
#include <stdio.h>

int main()
{
	//Declare various data types and initialize with arbitrary values
	int	int_var = -130;
	long int long_int_var = 40000;
	unsigned int u_int_var = 30000;
	char char_var = 'A';
	float float_var = 4.53;
	double double_var = 4.1234;
	long double long_double_var = 4.123091230912309;

	//print format specified variables to console
	printf("%i\n%ld\n%u\n%c\n%.2f\n%.4f\n%.20Lf\n", int_var, long_int_var, u_int_var, char_var, float_var, double_var, long_double_var);

	//return no error code on successful execution
	return 0;
}