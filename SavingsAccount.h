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

	// setters

	// member methods
	void Deposit(double amount) override;
	void Withdraw(double amount) override;

private:

};

#endif // SAVINGSACCOUNT_H