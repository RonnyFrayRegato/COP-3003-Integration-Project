// file: main.cpp
// by:   Ronny Fray Regato
// org:  COP 3003, 202108, 80602
// desc: banking app that allows user to create or review account(s) and perform transactions
// --------------------------------------------------------
#include <iostream>
#include <fstream>	// Version 2.2: File Implementation
#include <vector>	// Version 2.4: Data Structure Implementation

#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

// function prototypes
int PromptUser();
char AccountSelection();
void CreateCheckingAccount(Account* checking);
void DisplayCheckingAccount(Account* checking);
void CreateSavingsAccount(Account* savings);
void DisplaySavingsAccount(Account* savings);
int PromptUserModification();
void AccountModification(std::vector<Account*>& accounts);
// void WriteAccount(Account* account); // Version 2.2: File Implementation

// main
int main()
{
	std::vector<Account*> accounts; // Version 2.4: Data Structure Implementation
	int menu_choice{};
	char account_creation{};
	// std::fstream bankFile("bank.txt", std::ios::in | std::ios::out | std::ios::app); // Version 2.2: File Implementation

	// main loop for user selection
	bool loop = true;
	do
	{
		menu_choice = PromptUser();

		if (menu_choice == 1)
		{
			account_creation = AccountSelection();

			switch (account_creation)
			{
			case 'c':
			{
				// functions related to creating a new checking account
				CheckingAccount checking;
				Account* account = &checking;
				CreateCheckingAccount(account);
				accounts.push_back(account);	// Version 2.4: Data Structure Implementation
				// WriteAccount(checking); // Version 2.2: File Implementation
			}
				break;
			case 's':
			{
				// functions related to creating a new savings account
				SavingsAccount savings;
				Account* account = &savings;
				CreateSavingsAccount(account);
				accounts.push_back(account);	// Version 2.4: Data Structure Implementation
				// WriteAccount(savings); // Version 2.2: File Implementation
				break;
			}
			default:
				std::cout << "Invalid selection. Please enter a valid account type to create." << std::endl << std::endl;
			}
		}
		else if (menu_choice == 2)
		{
			AccountModification(accounts);
		}
		else if (menu_choice == 3)
		{
			loop = false;
		}
	} while (loop);

	return 0; // return success
} // end main


/**
 display the user menu, prompt for menu choice, and return the int value entered by the user

 Parameters:

 Returns:
 int				user choice from menu
*/
int PromptUser()
{
	int User_Selection{};

	std::cout << "Select an option from the menu below:" << std::endl;
	std::cout << "\t1) Create a new account" << std::endl;
	std::cout << "\t2) Modify an existing account" << std::endl;
	std::cout << "\t3) Exit" << std::endl;
	std::cin >> User_Selection;
	std::cin.ignore();

	return User_Selection;
} // end PromptUser


/**
 prompt user for type of account to be created, and return the char value associated with account type

 Parameters:

 Returns:
 char				account type to be created
*/
char AccountSelection()
{
	std::string account_type{};
	char account_selection{};

	std::cout << std::endl << "Enter the type of account to create (checking or savings): " << std::endl;
	std::cin >> account_type;
	std::cin.ignore();
	account_selection = tolower(account_type.at(0));

	return account_selection;
} // end AccountSelection


/**
 Prompt user for their name and initial deposit, create checking account, and display account info

 Parameters:
 Account*				pointer of Account type resolved via dynamic dispatch

 Returns:
 void
*/
void CreateCheckingAccount(Account* checking)
{
	std::string name{};
	double initial_deposit{};

	std::cout << "Enter your name: " << std::endl;
	std::cin >> name;
	checking->SetName(name);
	std::cin.ignore();

	std::cout << "Enter an initial deposit amount: " << std::endl;
	std::cin >> initial_deposit;
	checking->SetBalance(initial_deposit);
	std::cin.ignore();

	std::cout << std::endl << "Checking Account Created" << std::endl;
	DisplayCheckingAccount(checking);
} // end CreateCheckingAccount


/**
 Display checking account info

 Parameters:
 Account*				pointer of Account type resolved via dynamic dispatch

 Returns:
 void
*/
void DisplayCheckingAccount(Account* checking)
{
	std::cout << "Your account number is: " << checking->GetAccountNumber() << std::endl;
	std::cout << "Name: " << checking->GetName() << std::endl;
	std::cout << "Current Balance: " << checking->GetBalance() << std::endl << std::endl;
} // end DisplayCheckingAccount


/**
 Prompt user for their name and initial deposit, create savings account, and display account info

 Parameters:
 Account*				pointer of Account type resolved via dynamic dispatch

 Returns:
 void
*/
void CreateSavingsAccount(Account* savings)
{
	std::string name{};
	double initial_deposit{};

	std::cout << "Enter your name: " << std::endl;
	std::cin >> name;
	savings->SetName(name);
	std::cin.ignore();

	std::cout << "Enter an initial deposit amount: " << std::endl;
	std::cin >> initial_deposit;
	savings->SetBalance(initial_deposit);
	std::cin.ignore();

	std::cout << std::endl << "Savings Account Created" << std::endl;
	DisplaySavingsAccount(savings);
} // end CreateSavingsAccount


/**
 Display savings account info

 Parameters:
 Account*				pointer of Account type resolved via dynamic dispatch

 Returns:
 void
*/
void DisplaySavingsAccount(Account* savings)
{
	std::cout << "Your account number is: " << savings->GetAccountNumber() << std::endl;
	std::cout << "Name: " << savings->GetName() << std::endl;
	std::cout << "Current Balance: " << savings->GetBalance() << std::endl;
	std::cout << "Interest Rate: " << savings->GetInterestRate() << "%" << std::endl << std::endl;
} // end DisplaySavingsAccount


int PromptUserModification()
{
	int User_Selection{};

	std::cout << std::endl << "Select the type of transction to be performed from the menu below:" << std::endl;
	std::cout << "\t1) Deposit" << std::endl;
	std::cout << "\t2) Withdraw" << std::endl;
	std::cin >> User_Selection;
	std::cin.ignore();

	return User_Selection;
} // end PromptUserModification


void AccountModification(std::vector<Account*>& accounts)
{
	int entered_account_number;
	int menu_choice;
	double amount;

	std::cout << std::endl << "Enter the account number of the account to be modified: " << std::endl;
	std::cin >> entered_account_number;
	std::cin.ignore();

	if (entered_account_number == accounts[entered_account_number - 1]->GetAccountNumber())
	{
		menu_choice = PromptUserModification();

		if (menu_choice == 1)
		{
			std::cout << std::endl << "Enter the amount to deposit: " << std::endl;
			std::cin >> amount;
			std::cin.ignore();
			accounts[entered_account_number - 1]->Deposit(amount);
			std::cout << std::endl << "you have deposited $" << amount << std::endl;
			std::cout << "your new balance is: $" << accounts[entered_account_number - 1]->GetBalance() << std::endl << std::endl;
		}
		else if (menu_choice == 2)
		{
			std::cout << std::endl << "Enter the amount to withdraw: " << std::endl;
			std::cin >> amount;
			std::cin.ignore();
			accounts[entered_account_number - 1]->Withdraw(amount);
			std::cout << std::endl << "you have withdrawn $" << amount << std::endl;
			std::cout << "your new balance is: $" << accounts[entered_account_number - 1]->GetBalance() << std::endl << std::endl;
		}
		else
		{
			std::cout << "Invalid selection. Please enter a valid transaction type." << std::endl;
		}
	}
	else
	{
		std::cout << "Invalid account number. Please enter a valid account number for proper access." << std::endl;
	}
} // end AccountModification


/*
void WriteAccount(Account* account) // Version 2.2: File Implementation
{
	std::fstream bankFile("bank.txt", std::ios::out | std::ios::app);
	bankFile << "Account Number: " << CheckingAccount::GetAccountNumber() << std::endl << "Name: " << account->GetName() << std::endl
		<< "Current Balance: " << account->GetBalance() << std::endl;
}
*/