// file: CheckingAccount.cpp
// by:	 Ronny Fray Regato
// org:  COP 3003, 202108, 80602
// desc: implementation of a CheckingAccount class object
// --------------------------------------------------------
#include "CheckingAccount.h"

// constructors
// --------------------------------------------------------
/**
 default constructor - update account number for new checking account
*/
CheckingAccount::CheckingAccount()
{
	++account_number_;
}


/**
 properties constructor - initialize a custom checking account via call to matching base constructor
*/
CheckingAccount::CheckingAccount(std::string name, double initial_deposit)
	: Account(name, initial_deposit) {}


// accessors
// --------------------------------------------------------
// getters
int CheckingAccount::GetAccountNumber() { return account_number_; }

// setters
int CheckingAccount::account_number_ = 0; // set static member variable to 0