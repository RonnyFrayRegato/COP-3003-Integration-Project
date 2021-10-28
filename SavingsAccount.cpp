// file: CheckingAccount.cpp
// by:	 Ronny Fray Regato
// org:  COP 3003, 202108, 80602
// desc: implementation of a SavingsAccount class object
// --------------------------------------------------------

#include "SavingsAccount.h"

// constructors
// --------------------------------------------------------
/**
 default constructor - update account number for new checking account
*/
SavingsAccount::SavingsAccount()
{
	++account_number_;
}


/**
 properties constructor - initialize a custom savings account
*/
SavingsAccount::SavingsAccount(std::string name, double initial_deposit, double interest_rate) // overload constructor
	: Account(name, initial_deposit, interest_rate) {}


// accessors
// --------------------------------------------------------
// getters
int SavingsAccount::GetAccountNumber() { return account_number_; }

// setters
// set static member variable to 0
int SavingsAccount::account_number_ = 0;