/*
	Author: Max Novak
	Date: 9/1/2018
	CS 1 Lab 2 - Practice
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
	printf("%i\n%d\n%u\n%c\n%f\n%f\n%Lf\n", int_var, long_int_var, u_int_var, char_var, float_var, double_var, long_double_var);

	//return no error code on successful execution
	exit(0);
}