/**
 * @file SavingsAccount.h
 * @brief Declaration of a SavingsAccount class object.
 *
 * @author Ronny Fray Regato
 * @bug No known bugs.
*/
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

/**
 * @brief A SavingsAccount class representing a savings account
 *
 * This is a SavingsAccount class used to inherit fields and methods common
 * in a bank account, as well as implement behaviors unique to a savings
 * account.
*/
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