/*
	Author: Max Novak
	Date: 10/19/2018
	CS 1 Lab 12 - LownumHighnum
	Pseudo Code
	Phase 1:
		- low number, high number, high range, low range
	Phase 2: 
		- int low_num;
		- int high_num;
		- char high_range;
		- string low_range;
	Phase 3:
		I. Take user input
		II. Logic to find range of input
		III. Output formatted table
	Phase 4:
		I.
			a. Prompt user for input
			b. use scanf to take in input
				* take input for low_num and high_num
		II. 
			a. Send input to check if the user inputted the correct answers to the prompts
			b. Send input to print_range function
		III.
			a.  Print the range, high, and low number in a well formatted table
*/

#include <stdio.h>

void print_range(int num);

int main()
{
	//declare variables
	int low_num, high_num;
	char low_range, high_range;

	//take user input
	puts("Please input the lowest number: ");
	scanf("%d", &low_num);
	puts("Please input the highest number: ");
	scanf("%d", &high_num);

	//error check the user input
	if(low_num > high_num)
	{
		int temp = low_num;
		low_num = high_num;
		high_num = temp;
	}

	//Print well formatted tables
	//Also finds the ranges of both values
	printf("The value %d is being stored in the low_num variable. The value lies between the range ", low_num);
	print_range(low_num);
	printf("The value %d is being stored in the high_num variable. The value lies between the range ", high_num);
	print_range(high_num);

	return 0;
}

/**********************************************
* Find the range of which a value lies within *
**********************************************/
void print_range(int num)
{
	//logic structure for determining number ranges
	if(num < 0)
		puts("below 0");
	else
		if(num >= 0 && num <= 50)
			puts("0 to 50");
		else
			if(num >= 51 && num <= 100)
				puts("51 to 100");
			else
				if(num >= 101 && num <= 150)
					puts("101 to 150");
				else
					puts("above 150");
}
