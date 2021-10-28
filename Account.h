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
	Account(int account_number, std::string name);

	// accessors
	// getters
	int GetAccountNumber();
	std::string GetName();

	// setters
	void SetAccountNumber(int account_number);
	void SetName(std::string name);

	// member methods
	void CreateAccount();

private:
	int account_number_;
	std::string name_;
};

#endif // ACCOUNT_H