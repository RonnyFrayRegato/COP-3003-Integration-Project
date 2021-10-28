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
Account::Account() : name_{ "Default User" }, balance_{0.00} {} // Initialize member variables


/**
 properties constructor - initialize a custom account
*/
Account::Account(std::string name, double initial_deposit) // overload constructor
	: name_{ name }, balance_{ initial_deposit } {}


// DELETE
Account::Account(std::string name, double initial_deposit, double interest_rate)
	: name_{ name }, balance_{ initial_deposit }, interest_rate_{ interest_rate } {}

// accessors
// --------------------------------------------------------
// getters
std::string Account::GetName() { return name_; }
double Account::GetBalance() { return balance_; }
double Account::GetInterestRate() { return interest_rate_; }

// setters
void Account::SetName(std::string name) { name_ = name; }
void Account::SetBalance(double balance) { balance_ = balance; }
void Account::SetInterestRate(double interest_rate) { interest_rate_ = interest_rate; }