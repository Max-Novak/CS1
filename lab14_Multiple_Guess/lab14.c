/*
	Author: Max Novak
	Date: 10/20/2018
	CS 1 Lab 14 - Multiple_Guess
	Pseudo Code
	Phase 1:
		- 
	Phase 2: 
		- char answer[];
		- int score;
	Phase 3:
		I. Take user input after asking a question
		II. Check to see if answer is correct
		III. Output correct number of questions answered
	Phase 4:
		I.
			a. Prompt user for input after asking questions
			b. use gets to take in input
				* take input for answer1,2,3
		II. 
			a. Check all three answer choices
		III.
			a.  Print the users score after taking the quiz (score)

Questions:
	-How to compare strings without strcmp or your own compare function
*/

#include <stdio.h>

int get_answer_math_library();
int get_answer_return_function();
int get_answer_format_double();

int main()
{
	//declarations
	int solved;

	//Quiz questions
	solved += get_answer_math_library();
	solved += get_answer_return_function();
	solved += get_answer_format_double();

	//Print final score of the quiz
	printf("You scored %d/3 correctly!\n", solved);

	return 0;
}

int get_answer_math_library()
{
	//declarations
	char answer[32];
	int test = 1;

	puts("What is the include statement to add the built in C library capable of providing mathematical functions such as sqrt?");
	gets(answer);

	//check answer to see if correct library inclusion statement was written
	if(strcmp(answer, "#include <math.h>;") != 0)
	{
		test = 0;
		puts("Incorrect: The header library titled \"math.h\" along with the default inclusion statement syntax is the correct answer");
	}

	return test;
}

int get_answer_return_function()
{
	//Declarations
	char answer[16];
	int test = 1;

	puts("How many data types can a single function call return?");
	gets(answer);

	//check answer to see if correct boolean value was input
	if(strcmp(answer, "true") != 0)
	{
		test = 0;
		puts("Incorrect: The answer is \"true\" because functions by definition must only have 1 return value per each unique input");
	}

	return test;
}

int get_answer_format_double()
{
	//Declarations
	char answer[16];
	int test = 1;

	puts("What is the format specifier for a long double?");
	gets(answer);

	//check answer to see if format specifer was inputted
	if(strcmp(answer, "%Lf") != 0)
	{
		test = 0;
		puts("Incorrect: The answer is %Lf");
	}

	return test;
}