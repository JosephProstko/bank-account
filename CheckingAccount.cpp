/*
 * The CheckingAccount() class inherits from Account
 * and overrides methods to include a transactional fee.
 * Author: Joseph Prostko
 * Project: Assignment 1: CPP Programming; Checking Account Class
 * Version: October 2019
 */
#include "CheckingAccount.h"

/*
 * The CheckingAccount(double, double) is the default constructor
 * for a CheckingAccount() object and holds the account balance and fee
 * for each transaction.
 */
CheckingAccount::CheckingAccount(double temp, double tempFee)
{
	// The account balance is initialized as the value of temp.
	balance = temp;

	// The transactional fee is initialized as the value of tempFee.
	fee = tempFee;
}

/*
 * The credit(double) method credits an amount to the account balance.
 */
void CheckingAccount::credit(double temp) {
	// The value of temp is added to the balance.
	balance += temp;

	// The fee amount is subtracted from the balance.
	balance -= fee;
}

/*
 * The debit(double) method debits an amount from the account balance.
 */
void CheckingAccount::debit(double temp)
{
	// The if statement checks if the amount withdrawn exceeds the balance.
	if ((balance - temp - fee) < 0.0) {

		//If so, an error message if printed.
		cout << "Debit amount exceeded account balance." << endl;
	}
	// Otherwise, the transaction is made.
	else {
		// The debited amount is subtracted from the account balance.
		balance -= temp;

		// The fee amount is subtracted from the balance.
		balance -= fee;
	}
}
