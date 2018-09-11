#include <stdio.h>
#include <limits.h>

/*
	Author: Max Novak
	Date: 9/9/2018
	CS 1 Lab 3 - PushTheLimit
	Pseudo Code
	Phase 1:
		- No variables to be declared
	Phase 2:
		- No variables to initialize
	Phase 3:
		I. Print the column names
		II. Print each MAX/MIN output
	Phase 4:
		I.
			A. datatype --- min value --- max value
		II.
			A. CHAR_MIN --- CHAR_MAX
			B. INT_MIN --- INT_MAX
			C. 0 --- UINT_MAX
			D. LONG_MIN --- LONG_MAX
			E. 0 --- ULONGINT_MAX
*/

/*
print a specified number of a certain string to console
*/
void repeatString(int num_repeat, char output_base[])
{
	int i;

	for(i = 0; i < num_repeat; i++)
	{
		printf("%s", output_base);
	}
	puts("");
}

int main()
{
	printf("%30s%25s%25s\n", "data type", "minimum value", "maximum value");
	repeatString(30, "-+-");
	printf("%30s%25i%25i\n", "character", CHAR_MIN, CHAR_MAX);
	printf("%30s%25i%25i\n", "integer", INT_MIN, INT_MAX);
	printf("%30s%25s%25u\n", "unsigned integer", "DNE", UINT_MAX);
	printf("%30s%25ld%25ld\n", "long integer", LONG_MIN, LONG_MAX);
	printf("%30s%25s%25lu\n", "unsigned long", "DNE", ULONG_MAX);

	return 0;
}