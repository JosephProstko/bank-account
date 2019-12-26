/*
 * The Account() class defines a basic bank account with
 * a default method for crediting and debiting an account.
 * Author: Joseph Prostko
 * Project: Assignment 1: CPP Programming; Account Class
 * Version: October 2019

 */
#include "Account.h"
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * Account() is the default constructor for an account.
 */
Account::Account()
{
	// The account balance is initialized as 0.
	balance = 0.0;
}

/*
 * Account(double) initializes the bank account with a specified amount.
 */
Account::Account(double temp)
{
	// The if statement below checks if the balance entered is negative.
	if (temp < 0.0){

		// balance is initializes as zero.
		balance = 0.0;

		// If the amount entered is less than 0, an error message is printed.
		cout << fixed << setprecision(2);
		cout << "Error: Balance entered is less than $0.00." << endl;
	}
	// Otherwise, balance is initialized as the specified amount.
	else
	balance = temp;
}

/*
 * getBalance() returns the account balance.
 */
double Account::getBalance()
{
	// The account balance is returned.
	return balance;
}

/*
 * credit() adds an amount to the balance.
 */
void Account::credit(double temp)
{
	// The value of temp is added to the account balance.
	balance += temp;
}

/*
 * debit() withdraws an amount from the balance.
 */
void Account::debit(double temp)
{
	// The if statement below makes sure the amount being withdrawn
	// does not exceed the account limit.
	if ((balance - temp) < 0.0) {

		// If so, an error message is printed.
		cout << "Debit amount exceeded account balance." << endl;
	}
	// Otherwise, the value of temp is subtracted from the account.
	else
	balance -= temp;
}
