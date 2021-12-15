// file: Account.cpp
// by:	 Ronny Fray Regato
// org:  COP 3003, 202108, 80602
// desc: implementation of an Account class object
// --------------------------------------------------------
#include "Account.h"

// constructors
// --------------------------------------------------------
/**
 default constructor - initialize default account
*/
Account::Account() : name_{ "Default User" }, balance_{ 0.00 } {} // Initialize member variables


/**
 properties constructor - initialize a custom checking account
*/
Account::Account(std::string name, double initial_deposit)
	: name_{ name }, balance_{ initial_deposit } {}


/**
 properties constructor - initialize a custom savings account
*/
Account::Account(std::string name, double initial_deposit, double interest_rate)
	: name_{ name }, balance_{ initial_deposit }, interest_rate_{ interest_rate } {}


// accessors
// --------------------------------------------------------
// getters
std::string Account::GetName() { return name_; }
double Account::GetBalance() { return balance_; }
double Account::GetInterestRate() { return interest_rate_; }
int Account::GetAccountNumber() { return account_number_; }

// setters
void Account::SetName(std::string name) { name_ = name; }
void Account::SetBalance(double balance) { balance_ = balance; }
void Account::SetInterestRate(double interest_rate) { interest_rate_ = interest_rate; }
int Account::account_number_ = 0; // set static member variable to 0


// member methods
// --------------------------------------------------------
/**
 N/A

 Parameters:

 Returns:
 N/A				N/A
*/
void Account::Deposit(double amount) {}


/**
 N/A

 Parameters:

 Returns:
 N/A				N/A
*/
void Account::Withdraw(double amount) {}