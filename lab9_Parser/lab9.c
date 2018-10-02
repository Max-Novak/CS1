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
			b. return calculated values and store in indexes / input
		III.
			a. print indexes spaced by 2 
*/

#include <stdio.h>

int tokenizer(int num, int dividend);
int modder(int num, int dividend);

///*
//takes in an integer and truncates the number by the dividend
///*
int tokenizer(int num, int dividend)
{
	int quotient;

	//integer division
	quotient = num / dividend;

	return quotient;
}

///*
//takes in an integer and invert truncates the number by the dividend using mod
///*
int modder(int num, int dividend)
{
	int remainder;

	//mod remainder
	remainder = num % dividend;

	return remainder;
}

int main()
{
	int input;
	int index0, index1, index2, index3, index4;

	//I.
	puts("Welcome to the l337 parser");
	puts("Please enter a postive integer (1-32767)");
	scanf("%d", &input);

	//test cases = 4652 works   06205 works  94639 works
	//II.
	index0 = tokenizer(input, 10000);
	input = modder(input, 10000);
	index1 = tokenizer(input, 1000);
	input = modder(input, 1000);
	index2 = tokenizer(input, 100);
	input = modder(input, 100);
	index3 = tokenizer(input, 10);
	input = modder(input, 10);
	index4 = tokenizer(input, 1);

	//III.
	puts("Below lies the parsed number: ");
	printf("number --> %d  %d  %d  %d  %d\n", index0, index1, index2, index3, index4);

	//return with no error code
	return 0;
}