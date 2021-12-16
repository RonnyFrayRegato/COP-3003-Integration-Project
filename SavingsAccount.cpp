/**
 * @file SavingsAccount.cpp
 * @brief Implementation of a SavingsAccount class object.
 *
 * @author Ronny Fray Regato
 * @bug No known bugs.
*/
#include "SavingsAccount.h"

// constructors
// --------------------------------------------------------
/**
 * @brief Default constructor - update account number for new savings account.
 * 
 * Increments account number every time a SavingsAccount object is created.
*/
SavingsAccount::SavingsAccount() noexcept
{
	++account_number_;
}


/**
 * @brief Properties constructor - initialize a custom savings account via call to matching base constructor.
 * @param name Savings account owner's name.
 * @param initial_deposit Amount deposited during account creation.
 * @param interest_rate Percentage applied to account balance to calculate interest.
 * 
 * Initializes member variables to user input values for a savings account.
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
 * @brief Adds an amount via customer input to account balance.
 * @param amount Desired customer amount to be desposited.
 * 
 * Overriden function designed to be called using an Account superclass type pointer resolved
 * via dynamic disptach.
 * 
 * @return Void.
*/
void SavingsAccount::Deposit(double amount) noexcept
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
void SavingsAccount::Withdraw(double amount) noexcept
{
	const double new_balance = GetBalance() - amount;

	SetBalance(new_balance);
}