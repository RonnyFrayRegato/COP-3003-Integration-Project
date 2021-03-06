/**
 * @file Account.h
 * @brief Declaration of an Account class object.
 *
 * @author Ronny Fray Regato
 * @bug No known bugs.
*/
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

/**
 * @brief An Account class representing a bank account
 * 
 * This is an Account class used to declare fields and methods common
 * in all types of bank accounts.
*/
class Account // LO1, LO1a
{
public:
	// constructors
	Account();
	Account(std::string name, double initial_deposit); // LO1b
	Account(std::string name, double initial_deposit, double interest_rate);

	virtual ~Account() = default;

	// accessors
	// getters
	auto GetName()->std::string;
	auto GetBalance()noexcept->double;
	auto GetInterestRate()noexcept->double;
	static auto GetAccountNumber()noexcept->int;

	// setters
	void SetName(std::string name);
	void SetBalance(double balance) noexcept;
	void SetInterestRate(double interest_rate) noexcept;

	// member methods
	virtual void Deposit(double amount);
	virtual void Withdraw(double amount);

protected:
	static int account_number_;

private: // LO6
	std::string name_;
	double balance_{};
	double interest_rate_{ 0.45 };
};

#endif // ACCOUNT_H