/*
 * The SavingsAccount() class inherits from Account
 * and calculates interest for an account
 * Author: Joseph Prostko
 * Project: Assignment 1: CPP Programming; Savings Account Class
 * Version: October 2019
 */
#include "SavingsAccount.h"

/*
 * SavingsAccount(double, double) initializes the account balance
 * and interest rate.
 */
SavingsAccount::SavingsAccount(double temp, double intrate)
{
	// The account balance is initialized as the value of temp.
	balance = temp;

	// The account interest rate is initialized as the value of intrate.
	interestRate = intrate;
}

/*
 * calculateInterest() returns the interest on a given balance.
 */
double SavingsAccount::calculateInterest()
{
	// The calculated interest is returned.
	return balance * interestRate;
} 