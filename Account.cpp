// file: Account.cpp
// by:	 Ronny Fray Regato
// org:  COP 3003, 202108, 80602
// desc: implementation of an Account class object
// --------------------------------------------------------
#include <iostream>

#include "Account.h"

// constructors
// --------------------------------------------------------
/**
 default constructor - initialize default account
*/
Account::Account()
{
	int account_number = 0;
	std::string name = "Default User";
}


/**
 properties constructor - initialize a custom account
*/
Account::Account(int account_number, std::string name)
{
	this->account_number_ = account_number;
	this->name_ = name;
}


// accessors
// --------------------------------------------------------
// getters
int Account::GetAccountNumber() { return account_number_; }
std::string Account::GetName() { return name_; }

// setters
void Account::SetAccountNumber(int account_number) { account_number_ = account_number; }
void Account::SetName(std::string name) { name = name_; }


// member methods
// --------------------------------------------------------
/**
 calculate and return the difference two points' x coordinates

 Parameters:

 Returns:
 void
*/
void Account::CreateAccount()
{
	int account_number;
	std::string name;

	std::cout << "Enter a new account number: ";
	std::cin >> account_number;
	std::cin.ignore();
	SetAccountNumber(account_number);
	std::cout << "Enter the new account owner's name: ";
	std::cin >> name;
	std::cin.ignore();
	SetName(name);
	std::cout << "\n";
} // end CreateAccount