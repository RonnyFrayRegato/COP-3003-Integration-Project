// file: CheckingAccount.h
// by:	 Ronny Fray Regato
// org:  COP 3003, 202108, 80602
// desc: declaration of a CheckingAccount class object
// --------------------------------------------------------
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount :	public Account
{
public:
	// constructors
	CheckingAccount();
	CheckingAccount(std::string name, double initial_deposit);

	// accessors
	// getters
	static int GetAccountNumber();

	// setters

	// member methods

private:
	static int account_number_;
};

#endif // CHECKINGACCOUNT_H