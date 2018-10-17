/*
	Author: Max Novak
	Date: 10/16/2018
	CS 1 Lab 11 - What If...
	Pseudo Code
	Phase 1:
		- num1, num2, num3, great_num, low_num
	Phase 2: 
		- int num1;
		- int num2;
		- int num3;
		- int great_num;
		- int low_num;
	Phase 3:
		I. Take user input
		II. Work logic to determine greatest num
		III. Output formatted table
	Phase 4:
		I.
			a. use scanf to take in input
				* take input for 3 nums
		II. 
			a. Send input to greatest num func
			b. Send input to lowest num func
		III.
			a.  Send data to well formatted table function
*/

#include <stdio.h>

void puts_int();
int find_greatest(int num1, int num2, int num3);
int find_lowest(int num1, int num2, int num3);
void print_high_low(int high, int low);

int main()
{
	//declare funcs
	int num1, num2, num3;
	int great_num, low_num;

	//motd banner 
	puts("Welcome to the greatest num and lowest num calculator");

	//prompt user and take in user input of 3 integers
	puts_int();
	scanf("%d", &num1);
	puts_int();
	scanf("%d", &num2);
	puts_int();
	scanf("%d", &num3);

	//Determine the greatest value between the 3 ints
	great_num = find_greatest(num1, num2, num3);
	
	//Determine the lowest value between the 3 ints
	low_num = find_lowest(num1, num2, num3);

	//Print well formatted table
	print_high_low(great_num, low_num);

	return 0;
}

/********************************************
* Output message to user					*
********************************************/
void puts_int()
{
	puts("Please input an integer");
	puts("------------------------------------------------");
}

/***********************************************
* Finds the greatest value between the numbers *
***********************************************/
int find_greatest(int num1, int num2, int num3)
{
	//temp greatest num
	int greatest;

	if(num1 > num2 && num1 > num3)
	{
		greatest = num1;
	}
	else
		if(num2 > num3 && num2 > num1)
		{
			greatest = num2;
		}
		else
		{
			greatest = num3;
		}

	return greatest;
}

/***********************************************
* Finds the lowest value between the numbers   *
***********************************************/
int find_lowest(int num1, int num2, int num3)
{
	//temp lowest num
	int lowest;

	if(num1 < num2 && num1 < num3)
	{
		lowest = num1;
	}
	else
		if(num2 < num3 && num2 < num1)
		{
			lowest = num2;
		}
		else
		{
			lowest = num3;
		}

	return lowest;
}

/***********************************************
* Print greatest and lowest values			   *
***********************************************/
void print_high_low(int high, int low)
{
	printf("The highest value is: %d\n", high);
	printf("The lowest value is: %d\n", low);
}