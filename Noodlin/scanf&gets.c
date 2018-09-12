#include <stdio.h>

int main()
{
	int int_num = 5;
	float float_num = 4.67;
	char buffer[7];

	printf("Enter a string.\n");
	//printf("Enter a decimal.\n");
	//printf("Enter an int.\n");

	
	//gets(buffer); //place data into buffer
	getchar(); //pull off the buffer and store nowhere
	//gets(buffer);//overwrite buffer? I think over write
	/*
	input: novak
	[n,o,v,a, k, \x00...]
	input: max
	pulls off m and leaves ax
	[a, x, \x00, a, k, \x00...]

	/*
	scanf("%f", &float_num);
	scanf("%f", &float_num);
	*/

	printf("float holds --> %3.2f\n", float_num);
	printf("Buffer holds --> %s\n", buffer);
	printf("int holds --> %d\n", int_num);

	/*
	for(int i = 0; i < 7; i++)
		printf("%d", buffer[i]);
	*/

	return 0;
}