// file: SavingsAccount.h
// by:	 Ronny Fray Regato
// org:  COP 3003, 202108, 80602
// desc: declaration of a SavingsAccount class object
// --------------------------------------------------------
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account
{
public:
	// constructors
	SavingsAccount();
	SavingsAccount(std::string name, double initial_deposit, double interest_rate);

	// accessors
	// getters
	static int GetAccountNumber();

	// setters

	// member methods

private:
	static int account_number_;
	// double interest_rate_{};
};

#endif // SAVINGSACCOUNT_H