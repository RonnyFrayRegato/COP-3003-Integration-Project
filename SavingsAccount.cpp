// file: SavingsAccount.cpp
// by:	 Ronny Fray Regato
// org:  COP 3003, 202108, 80602
// desc: implementation of a SavingsAccount class object
// --------------------------------------------------------
#include "SavingsAccount.h"

// constructors
// --------------------------------------------------------
/**
 default constructor - update account number for new savings account
*/
SavingsAccount::SavingsAccount()
{
	++account_number_;
}


/**
 properties constructor - initialize a custom savings account via call to matching base constructor
*/
SavingsAccount::SavingsAccount(std::string name, double initial_deposit, double interest_rate)
	: Account(name, initial_deposit, interest_rate) {}


// accessors
// --------------------------------------------------------
// getters

// setters


// member methods
// --------------------------------------------------------
/**
 N/A

 Parameters:

 Returns:
 N/A				N/A
*/
void SavingsAccount::Deposit(double amount)
{
	double new_balance = GetBalance() + amount;

	SetBalance(new_balance);
}


/**
 N/A

 Parameters:

 Returns:
 N/A				N/A
*/
void SavingsAccount::Withdraw(double amount)
{
	double new_balance = GetBalance() - amount;

	SetBalance(new_balance);
}