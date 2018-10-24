/*
	Author: Max Novak
	Date: 10/19/2018
	CS 1 Lab 12 - LownumHighnum
	Pseudo Code
	Phase 1:
		- low number, high number, low index, low index
	Phase 2: 
		- int low_num;
		- int high_num;
		- int low_index, high_index;
	Phase 3:
		I. Take user input
		II. Logic to find range of input
		III. Display in a switch case tree
		III. Output formatted table
	Phase 4:
		I.
			a. Prompt user for input
			b. use scanf to take in input
				* take input for low_num and high_num
		II. 
			a. Send input to check if the user inputted the correct answers to the prompts
			b. Send input to range function
			c. Send index to display function to print correct range
		III.
			a.  Print the range, high, and low number in a well formatted table
*/

#include <stdio.h>

int range(int num);
void display(int index);

int main()
{
	//declare variables
	int low_num, high_num;
	int low_index, high_index;

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

	//Calculate index of ranges
	low_index = range(low_num);
	high_index = range(high_num);
	
	//Print output in well formatted table
	printf("The value %d is being stored in the low_num variable. The value lies between the range ", low_num);
	display(low_index);
	printf("\nThe value %d is being stored in the high_num variable. The value lies between the range ", high_num);
	display(high_index);
	puts("");

	return 0;
}

/**********************************************
* Find the range of which a value lies within *
**********************************************/
int range(int num)
{
	int index = 0;
	//logic structure for determining number ranges
	if(num < 0)
		index = 1;
	else
		if(num >= 0 && num <= 50)
			index = 2;
		else
			if(num >= 51 && num <= 100)
				index = 3;
			else
				if(num >= 101 && num <= 150)
					index = 4;
				else
					index = 5;
	return index;
}

/**********************************************
* Print the ranges of the indexs			  *
**********************************************/
void display(int index)
{
	switch(index)
	{
		case 1:
			puts("below 0");
			break;
		case 2:
			puts("0 to 50");
			break;
		case 3:
			puts("51 to 100");
			break;
		case 4:
			puts("101 to 150");
			break;
		case 5:
			puts("above 150");
			break;
	}
}
