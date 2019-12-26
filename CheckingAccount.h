/*
 * The CheckingAccount() class inherits from Account
 * and overrides methods to include a transactional fee.
 * Author: Joseph Prostko
 * Project: Assignment 1: CPP Programming; Checking Account Class
 * Version: October 2019
 */

#ifndef CHECKINGACCOUNT_H_
#define CHECKINGACCOUNT_H_
#include "Account.h"
#include <iostream>
#include <iomanip>
using namespace std;
class CheckingAccount :
	public Account
{
public:
	// CheckingAccount(double,double) default constructor.
	CheckingAccount(double, double);

	// credit(double) is overrode.
	void credit(double temp);

	// debit(double) is overrode.
	void debit(double temp);

	// double fee holds the credit fee.
	double fee;
};

#endif /* CHECKINGACCOUNT_H_ */