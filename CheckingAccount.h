/**
 * @file CheckingAccount.h
 * @brief Declaration of a CheckingAccount class object.
 *
 * @author Ronny Fray Regato
 * @bug No known bugs.
*/
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"

/**
 * @brief A CheckingAccount class representing a checking account
 *
 * This is a CheckingAccount class used to inherit fields and methods common
 * in a bank account, as well as implement behaviors unique to a checking
 * account.
*/
class CheckingAccount : public Account // LO2
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