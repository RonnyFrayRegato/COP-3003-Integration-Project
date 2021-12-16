/**
 * @file Account.cpp
 * @brief Implementation of an Account class object.
 *
 * @author Ronny Fray Regato
 * @bug No known bugs.
*/
#include "Account.h"

// constructors
// --------------------------------------------------------
/**
 * @brief Default constructor - initialize default account.
 * 
 * Initializes member variables with default values.
*/
Account::Account() : name_{ "Default User" }, balance_{ 0.00 } {} // LO1c


/**
 * @brief Properties constructor - initialize a custom checking account.
 * @param name Checking account owner's name.
 * @param initial_deposit Amount deposited during account creation.
 * 
 * Initializes member variables to user input values for a checking account.
 * The constructor is designed to be called from the derived CheckingAccount
 * class.
*/
Account::Account(std::string name, double initial_deposit)
	: name_{ name }, balance_{ initial_deposit } {}


/**
 * @brief Properties constructor - Initialize a custom savings account
 * @param name Savings account owner's name.
 * @param initial_deposit Amount deposited during account creation.
 * @param interest_rate Percentage applied to account balance to calculate interest.
 * 
 * Initializes member variables to user input values for a savings account.
 * The constructor is designed to be called from the derived SavingsAccount
 * class.
*/
Account::Account(std::string name, double initial_deposit, double interest_rate)
	: name_{ name }, balance_{ initial_deposit }, interest_rate_{ interest_rate } {}

//Account::~Account() {}

// accessors
// --------------------------------------------------------
// getters
auto Account::GetName()->std::string { return name_; }
auto Account::GetBalance()noexcept->double { return balance_; }
auto Account::GetInterestRate()noexcept->double { return interest_rate_; }
auto Account::GetAccountNumber()noexcept->int { return account_number_; }

// setters
void Account::SetName(std::string name) { name_ = name; }
void Account::SetBalance(double balance) noexcept { balance_ = balance; }
void Account::SetInterestRate(double interest_rate) noexcept { interest_rate_ = interest_rate; }
int Account::account_number_ = 0; // set static member variable to 0


// member methods
// --------------------------------------------------------
/**
 * @brief Adds an amount via customer input to account balance.
 * 
 * Virtual function in the Account Class is designed to be overriden to the
 * appropriate derived CheckingAccount or SavingsAccount class.
 * 
 * @param amount Desired customer amount to be desposited.
 * @return Void.
*/
void Account::Deposit(double amount) {}


/**
 * @brief Subtracts an amount via customer input from account balance.
 * 
 * Virtual function in the Account Class is designed to be overriden to the
 * appropriate derived CheckingAccount or SavingsAccount class.
 * 
 * @param amount Desired customer amount to be withdrawn.
 * @return Void.
*/
void Account::Withdraw(double amount) {}