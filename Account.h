/*
 * The Account() class defines a basic bank account with
 * a default method for crediting and debiting an account.
 * Author: Joseph Prostko
 * Project: Assignment 1: CPP Programming; Account Class
 * Version: October 2019
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_
class Account
{
public:
	// Account() is the default constructor.
	Account();

	// Account(double) initializes the balance.
	Account(double);

	// getBalance() returns the account balance.
	double getBalance();

	// credit(double) credits the account.
	void credit(double);

	// debit(double) debits the account.
	void debit(double);

	// double balance holds the account balance.
	double balance;
};

#endif /* ACCOUNT_H_ */