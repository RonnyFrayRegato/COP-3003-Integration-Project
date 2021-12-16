/**
 * @file CheckingAccount.cpp
 * @brief Implementation of a CheckingAccount class object.
 *
 * @author Ronny Fray Regato
 * @bug No known bugs.
*/
#include "CheckingAccount.h"

// constructors
// --------------------------------------------------------
/**
 * @brief Default constructor - update account number for new checking account.
 *
 * Increments account number every time a CheckingAccount object is created.
*/
CheckingAccount::CheckingAccount() noexcept
{
	++account_number_;
}


/**
 * @brief Properties constructor - initialize a custom checking account via call to matching base constructor.
 * @param name Checking account owner's name.
 * @param initial_deposit Amount deposited during account creation.
 * 
 * Initializes member variables to user input values for a checking account.
*/
CheckingAccount::CheckingAccount(std::string name, double initial_deposit)
	: Account(name, initial_deposit) {}


// accessors
// --------------------------------------------------------
// getters

// setters


// member methods
// --------------------------------------------------------
/**
 * @brief Adds an amount via customer input to account balance.
 * @param amount Desired customer amount to be desposited.
 * 
 * Overriden function designed to be called using an Account superclass type pointer resolved
 * via dynamic disptach.
 * 
 * @return Void.
*/
void CheckingAccount::Deposit(double amount) noexcept
{
	const double new_balance = GetBalance() + amount;

	SetBalance(new_balance);
}


/**
 * @brief Subtracts an amount via customer input from account balance.
 * @param amount Desired customer amount to be withdrawn.
 * 
 * Overriden function designed to be called using an Account superclass type pointer resolved
 * via dynamic disptach.
 * 
 * @return Void.
*/
void CheckingAccount::Withdraw(double amount) noexcept
{
	const double new_balance = GetBalance() - amount;

	SetBalance(new_balance);
}