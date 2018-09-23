/*
	Author: Max Novak
	Date: 9/17/2018
	CS 1 Lab 6 - Money
	Pseudo Code
	Phase 1:
		- Account number, customer name, inital balance, debits
		- payments, credit limit, new balance, credit remaining
	Phase 2: 
		- long int accnt_num;
		- char customer_name[50];
		- long double init_balance;
		- long double debts;
		- long double payments;
		- long double credit_limit;
		- long double new_balance;
		- long double credit_remaining;
	Phase 3:
		I. Take user input
		II. Do math on the input
		III. Output information and calculated data
	Phase 4:
		I.
			a. use fgets to take input for
				* accnt_name, customer_name, init_balance,
				* debts, payments, and credit_limit
		II. 
			a. new_balance = init_balance+debts-payments;
			b. if(new_balance > credit_limit)
				* print(-1)
		III.
			a. print formatted table with
				* customer information, new_balance,
				* and credit remaining
*/

//include input and ouput function library
#include <stdio.h>

int main()
{
	//declare required variables
	//you never know when hyper inflation hits so the data is very high precision
	long int accnt_num;
	char customer_name[50];
	long double init_balance;
	long double debts;
	long double payments;
	long double credit_limit;
	long double new_balance;
	long double credit_remaining;

	//Input series that asks the user to input data and that of which is stored
	//Some information is identifying them and the other set is for calculating values
	puts("Please enter account number");
	scanf("%ld", &accnt_num);
	getchar();
 	
 	/*
	~~~Thing to note~~~
		- scanf leaves \n in buffer so get char is required to remove before using gets afterwards
	*/

	puts("Please enter customer name");
	gets(customer_name);

	puts("Please enter your opening balance");
	scanf("%Lf", &init_balance);

	puts("Please enter the charges on your card");
	scanf("%Lf", &debts);

	puts("Please enter the payments on your card");
	scanf("%Lf", &payments);

	puts("Please enter your maximum credit limit");
	scanf("%Lf", &credit_limit);

	//Preform calculations on the data
	//value is determined in persepective from the bank
	new_balance = init_balance+debts-payments;
	//credit remaining is the credit they may use next month
	credit_remaining = credit_limit-new_balance;

	//Output formatted data to the user
	printf("Hello %s, your credit report has been generated below\n", customer_name);
	printf("account number: %ld\n", accnt_num);
	printf("%25s %25s\n", "New Balance", "Credit Remaining");
	printf("%25.2Lf %25.2Lf\n", new_balance, credit_remaining);

	//return with no error code
	return 0;
}