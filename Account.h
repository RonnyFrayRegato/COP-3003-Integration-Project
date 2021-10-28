// file: Account.h
// by:	 Ronny Fray Regato
// org:  COP 3003, 202108, 80602
// desc: declaration of an Account class object
// --------------------------------------------------------
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account
{
public:
	// constructors
	Account();
	Account(std::string name, double initial_deposit);
	Account(std::string name, double initial_deposit, double interest_rate);

	// accessors
	// getters
	std::string GetName();
	double GetBalance();
	double GetInterestRate();

	// setters
	void SetName(std::string name);
	void SetBalance(double balance);
	void SetInterestRate(double interest_rate);

	// member methods

private:
	std::string name_;
	double balance_{};
	double interest_rate_{};
};

#endif // ACCOUNT_H