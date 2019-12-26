/*
 * The SavingsAccount() class inherits from Account
 * and calculates interest for an account
 * Author: Joseph Prostko
 * Project: Assignment 1: CPP Programming; Savings Account Class
 * Version: October 2019
 */
#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_
#include "Account.h"
#include <iostream>
#include <iomanip>
using namespace std;
class SavingsAccount :
	public Account
{
public:
	// SavingsAccount(double, double) is the default constructor.
	SavingsAccount(double, double);

	// calculateInterest() finds the interest for a given balance.
	double calculateInterest();
private:
	// interestRate holds the interest rate.
	double interestRate;

};

#endif /* SAVINGSACCOUNT_H_ */