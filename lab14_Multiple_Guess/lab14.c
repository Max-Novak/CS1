/*
	Author: Max Novak
	Date: 10/29/2018
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
				* take input for answer 1,2,3
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

/**********************************************
* Determine if the user answered correctly    *
**********************************************/
int get_answer_math_library()
{
	//declarations
	int answer;
	int score = 0;

	puts("What is the include statement to add the built in C library capable of providing mathematical functions such as sqrt?");
	puts("(1) #include math;");
	puts("(2) #include <mathlibrary.h>;");
	puts("(3) #include <math.h>;");
	puts("(4) #include <math>;");

	//Take user input
	scanf("%d", &answer);

	//check answer to see if correct library inclusion statement was written
	switch(answer)
	{
		case 1:
			puts("Incorrect, header file inclusions must be enclosed in <>");
			break;
		case 2:
			puts("Incorrect, mathlibrary is not a builtin library for providing math functions");
			break;
		case 3:
			puts("Correct!");
			score++;
			break;
		case 4:
			puts("Incorrect, inclusions require the addition of a .h file extension");
			break;
	}

	return score;
}

/**********************************************
* Determine if the user answered correctly    *
**********************************************/
int get_answer_return_function()
{
	//Declarations
	int answer;
	int score = 0;

	//check answer to see if correct num of returns is input
	puts("How many data types can a single function call return?");
	puts("(1)");
	puts("(2)");
	puts("(3)");
	puts("(4)");

	//Take user input
	scanf("%d", &answer);

	//check answer to see if correct boolean value was input
	switch(answer)
	{
		case 1:
			puts("Correct!");
			score++;
			break;
		case 2:
			puts("Incorrect, only 1 data type can be returned in a single function return");
			break;
		case 3:
			puts("Incorrect, only 1 data type can be returned in a single function return");
			break;
		case 4:
			puts("Incorrect, only 1 data type can be returned in a single function return");
			break;
	}

	return score;
}

/**********************************************
* Determine if the user answered correctly    *
**********************************************/
int get_answer_format_double()
{
	//Declarations
	int answer;
	int score = 0;

	//ask the user which format specifier is correct
	puts("What is the format specifier for a long double?");
	puts("(1) %d");
	puts("(2) %ldz");
	puts("(3) %u");
	puts("(4) $Lf");

	//Take user input
	scanf("%d", &answer);

	//check answer to see if correct boolean value was input
	switch(answer)
	{
		case 1:
			puts("Incorrect, that is the signed int format specifier");
			break;
		case 2:
			puts("Incorrect, that is not a valid format specifier");
			break;
		case 3:
			puts("Incorrect, that is the unsigned int format specifer");
			break;
		case 4:
			puts("Correct!");
			score++;
			break;
	}

	return score;
}