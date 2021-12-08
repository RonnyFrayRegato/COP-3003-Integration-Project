// file: main.cpp
// by:   Ronny Fray Regato
// org:  COP 3003, 202108, 80602
// desc: banking app that allows user to create or review account(s) and perform transactions
// --------------------------------------------------------
#include <iostream>
#include <fstream>	// Version 2.2: File Implementation

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
void WriteAccount(Account* account); // Version 2.2: File Implementation

// main
int main()
{
	int menu_choice;
	char account_creation;
	// std::fstream bankFile("bank.txt", std::ios::in | std::ios::out | std::ios::app); // Version 2.2: File Implementation

	// main loop for user selection
	bool loop = true;
	do
	{
		menu_choice = PromptUser();
		Account* checking = new CheckingAccount();
		Account* savings = new SavingsAccount();

		if (menu_choice == 1)
		{
			account_creation = AccountSelection();

			switch (account_creation)
			{
			case 'c':
				// functions related to creating a new checking account
				CreateCheckingAccount(checking);
				WriteAccount(checking); // Version 2.2: File Implementation
				break;
			case 's':
				// functions related to creating a new savings account
				CreateSavingsAccount(savings);
				WriteAccount(savings); // Version 2.2: File Implementation
			}
		}
		// else if (menu_choice == 2) {}
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
    int User_Selection;

	std::cout << "Select an option from the menu below:" << std::endl;
	std::cout << "\t1) Create a new account" << std::endl;
	//std::cout << "\t2) ..." << std::endl;
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
	std::string account_type;
	char account_selection;

	std::cout << "Enter the type of account to create (checking or savings): " << std::endl;
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
	std::string name;
	double initial_deposit;

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
	std::cout << "Your account number is: " << CheckingAccount::GetAccountNumber() << std::endl;
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
	std::string name;
	double initial_deposit;

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
	std::cout << "Your account number is: " << SavingsAccount::GetAccountNumber() << std::endl;
	std::cout << "Name: " << savings->GetName() << std::endl;
	std::cout << "Current Balance: " << savings->GetBalance() << std::endl;
	std::cout << "Interest Rate: " << savings->GetInterestRate() << "%" << std::endl << std::endl;	// added enl
} // end DisplaySavingsAccount


void WriteAccount(Account* account) // Version 2.2: File Implementation
{
	std::fstream bankFile("bank.txt", std::ios::out | std::ios::app);
	bankFile << "Account Number: " <<  CheckingAccount::GetAccountNumber() << std::endl << "Name: " << account->GetName() << std::endl 
		<< "Current Balance: " << account->GetBalance() << std::endl;
}