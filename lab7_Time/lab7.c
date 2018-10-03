/*
	Author: Max Novak
	Date: 9/24/2018
	CS 1 Lab 7 - Time
	Pseudo Code
	Phase 1:
		- num seconds, day count, hour count, minute count, second count
	Phase 2: 
		- long int num_count;
		- long int day_count;
		- long int hour_count;
		- long int minute_count;
		- long int second_count;
	Phase 3:
		I. Take user input
		II. Do math on the input
		III. Output formatted data
	Phase 4:
		I.
			a. use gets to take input for
				* seconds_count
		II. 
			a. days = seconds % 86400
			b. seconds %= 86400
			c. hours = seconds % 3600
			d. seconds %= 3600
			e. minutes = seconds % 60
			f. seconds %= 60
			g. seconds = num_seconds
		III.
			a. print formatted table with
				* days/hours/minutes/seconds
*/

#include <stdio.h>

int main()
{
	//declare variables
	long int num_seconds;
	long int day_count;
	long int hour_count;
	long int minute_count;
	long int second_count;

	//I
	//Recieve user input
	printf("Please enter the amount of seconds desired: ");
	scanf("%ld", &num_seconds);

	//II
	//Preform calculations using modulus
	second_count = num_seconds;
	day_count = second_count / 86400;
	second_count %= 86400;
	hour_count = second_count / 3600;
	second_count %= 3600;
	minute_count = second_count / 60;
	second_count %= 60;

	//III
	//output data to user
	printf("In %ld seconds there are: \n", num_seconds);
	printf("Days %ld\n", day_count);
	printf("Hours %ld\n", hour_count);
	printf("Minutes %ld\n", minute_count);
	printf("Seconds %ld\n", second_count);

	//return with no error code
	return 0;
}