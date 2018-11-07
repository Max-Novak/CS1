/*
	Author: Max Novak
	Date: 11/1/2018
	CS 1 Lab 15 - Store Credit 2
	Pseudo Code
	Phase 1:
		- accnt num, balance, debts, credit, max cred limit
	Phase 2: 
		- long int accnt_num;
		- double balance;
		- double debts;
		- double creds;
        - double cred_limit;
	Phase 3:
		I. Take user input
		II. Determine if credit limit exceeded
		III. Output correct reponse and reprompt
	Phase 4:
		I.
			a. Prompt user for input
			b. use scanf/gets to take in input
				* take input for accnt_num, balance, debts, creds, cred_limit
		II. 
			a. If credit limit exceeded = True
                1. "Credit limit exceeded"
                2. Otherwise output data
		III.
			a.  Print data in well formatted table
	Questions:
		- 
*/

#include <stdio.h>

double calc_balance(double init_balance, double debts, double creds);
void is_credit_exceeded(double cred_limit, double balance, long int accnt_num);

int main()
{
    //declarations
    long int accnt_num;
    double init_balance;
    double debts;
	double creds;
    double cred_limit;
	double balance;
	int flag = 1;
	puts("Welcome to the Credit Calc");
	
	while(flag)
	{
		//Obtain per/user information
		puts("Please input accnt number");
		scanf("%ld", &accnt_num);
		puts("Please input beginning balance of the month");
		scanf("%lf", &init_balance);
		puts("Please input items charged (debits)");
		scanf("%lf", &debts);
		puts("Please input payments (credits)");
		scanf("%lf", &creds);
		puts("Please input max credit limit");
		scanf("%lf", &cred_limit);

		//Calculate their balance
		balance = calc_balance(init_balance, debts, creds);
		//Determine if credit limit has been exceeded
		is_credit_exceeded(cred_limit, balance, accnt_num);

		//ask user if they want to input another user's information
		//**question: How does C determine logical truth
		puts("Do you want to input another user's information? Input 1 to continue or 0 to end");
		scanf("%d", flag);
	}

    return 0;
}

double calc_balance(double init_balance, double debts, double creds)
{
	double balance;
	balance = init_balance + debts - creds;

	return balance;
}

void is_credit_exceeded(double cred_limit, double balance, long int accnt_num)
{
	double credit_remaining;
	credit_remaining = cred_limit - balance;

	if(credit_remaining < 0)
	{
		printf("\n~~~~~~~~~~~~~~~~~\n");
		printf("account number: %ld\ncredit limit: %.2lf\nbalance: %.2lf\n", accnt_num, cred_limit, balance);
		puts("Credit limit exceeded");
		printf("\n~~~~~~~~~~~~~~~~~\n");
	}
	else
	{
		printf("\n~~~~~~~~~~~~~~~~~\n");
		printf("account number: %ld\ncredit limit: %.2lf\ncredit remaining: %.2lf\n", accnt_num, cred_limit, credit_remaining);
		printf("\n~~~~~~~~~~~~~~~~~\n");
	}
}