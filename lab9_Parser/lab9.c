/*
	Author: Max Novak
	Date: 9/30/2018
	CS 1 Lab 9 - Parser
	Pseudo Code
	Phase 1:
		- input, index0, index1, index2, index3, index4
	Phase 2: 
		- uint input, index0, index1, index2, index3, index4;
	Phase 3:
		I. Take user input
		II. Do math on the input by sending to functions
		III. Output information spaced by 2 apart
	Phase 4:
		I.
			a. use gets to take input for
				* int input
		II. 
			a. Send input to int quotient and remainder functions
			b. return output
		III.
			a. print intput spaced by 2 
*/

#include <stdio.h>

int int_quotient(int a, int b);
int int_remainder(int a, int b);

int int_quotient(int a, int b)
{
	int quotient;

	return quotient;
}

int int_remainder(int a, int b)
{
	int remainder;

	return remainder;
}

int main()
{
	int input;
	int index0, index1, index2, index3, index4;

	puts("Welcome to the l337 parser");
	puts("Please enter a postive integer (1-32767)");
	scanf("%d", &input);



	printf("\n%d %d %d %d %d\n", index0, index1, index2, index3, index4);

	return 0;
}