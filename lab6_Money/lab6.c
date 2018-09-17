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
			a. new_balance = init_balance-debts+payments;
			b. if(new_balance > credit_limit)
				* print(-1)
		III.
			a. print formatted table with
				* customer information, new_balance,
				* and credit remaining
*/

#include <stdio.h>

int main()
{
	long int accnt_num;
	char customer_name[50];
	long double init_balance;
	long double debts;
	long double payments;
	long double credit_limit;
	long double new_balance;
	long double credit_remaining;

	puts("Please enter account number");
	fgets(stdin, "%d", &accnt_num);

	puts("Please enter customer name");
	fgets(stdin, "%s", &customer_name);

	puts("Please enter your opening balance");
	fgets(stdin, "%Lf", &init_balance);

	puts("Please enter the charges on your card");
	fgets(stdin, "%Lf", &debts);

	puts("Please enter the payments on your card");
	fgets(stdin, "%Lf", &payments);

	puts("Please enter your maximum credit limit");
	fgets(stdin, "%Lf", &credit_limit);

	new_balance = init_balance-debts+payments;


	return 0;
}