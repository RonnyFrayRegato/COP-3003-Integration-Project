// file: CheckingAccount.h
// by:	 Ronny Fray Regato
// org:  COP 3003, 202108, 80602
// desc: declaration of a CheckingAccount class object
// --------------------------------------------------------
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account
{
public:
	// constructors
	CheckingAccount();
	CheckingAccount(std::string name, double initial_deposit);

	// accessors
	// getters

	// setters

	// member methods
	void Deposit(double amount) override;
	void Withdraw(double amount) override;

private:
	
};

#endif // CHECKINGACCOUNT_H