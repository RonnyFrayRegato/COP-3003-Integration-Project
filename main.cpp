/**
 * @file main.cpp
 * @brief Banking app that allows user to create or review account(s) and perform transactions.
 *
 * @author Ronny Fray Regato
 * @bug No known bugs.
*/
#include <iostream>
#include <fstream>	// Version 2.2: File Implementation
#include <vector>

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

/**
 * @brief BankingApp program entry point.
 * 
 * This is the 'main' function. Program execution begins and ends there. The program begins with a with a menu and
 * prompt to choose actions related to an account. The control flow is implemented via an if statement for the account
 * actions and a switch statement for the selection of specific functions related to the selected actions. Program
 * execution ends via user input by way of the if statement.
 * 
 * @return Should not return.
*/
int main()
{
	/**
	 * @brief Vector containing Account superclass type pointers.
	 * 
	 * Data structure contains pointers of superclass type that point to addresses of subclasses. The Account type
	 * pointers call functions implemented in subclasses via dynamic disptach.
	*/
	std::vector<Account*> accounts;
	int menu_choice{};
	char account_creation{};

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
				accounts.push_back(account);
				// WriteAccount(checking); // Version 2.2: File Implementation
				break;
			}
			case 's':
			{
				// functions related to creating a new savings account
				SavingsAccount savings;
				Account* account = &savings;
				CreateSavingsAccount(account);
				accounts.push_back(account);
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
 * @brief Display the user menu, prompt for menu choice, and return the int value entered by the user.
 * 
 * This function utilizes a menu for the purpose of customer selection of account option type.
 * 
 * @return user_selection User choice from menu.
*/
int PromptUser()
{
	int user_selection{};

	std::cout << "Select an option from the menu below:" << std::endl;
	std::cout << "\t1) Create a new account" << std::endl;
	std::cout << "\t2) Modify an existing account" << std::endl;
	std::cout << "\t3) Exit" << std::endl;
	std::cin >> user_selection;
	std::cin.ignore();

	return user_selection;
} // end PromptUser


/**
 * @brief Prompt user for type of account to be created, and return the char value associated with account type.
 * @return account_selection Account type to be created.
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
 * @brief Prompt user for their name and initial deposit, create checking account, and display account info.
 * @param checking Pointer of Account superclass type to address of CheckingAccount subclass object.
 * @return Void.
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
 * @brief Display checking account information.
 * @param checking Pointer of Account superclass type to address of CheckingAccount subclass object.
 * @return Void.
*/
void DisplayCheckingAccount(Account* checking)
{
	std::cout << "Your account number is: " << checking->GetAccountNumber() << std::endl;
	std::cout << "Name: " << checking->GetName() << std::endl;
	std::cout << "Current Balance: " << checking->GetBalance() << std::endl << std::endl;
} // end DisplayCheckingAccount


/**
 * @brief Prompt user for their name and initial deposit, create savings account, and display account info.
 * @param savings Pointer of Account superclass type to address of SavingsAccount subclass object.
 * @return Void.
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
 * @brief Display savings account information.
 * @param savings Pointer of Account superclass type to address of SavingsAccount subclass object.
 * @return Void.
*/
void DisplaySavingsAccount(Account* savings)
{
	std::cout << "Your account number is: " << savings->GetAccountNumber() << std::endl;
	std::cout << "Name: " << savings->GetName() << std::endl;
	std::cout << "Current Balance: " << savings->GetBalance() << std::endl;
	std::cout << "Interest Rate: " << savings->GetInterestRate() << "%" << std::endl << std::endl;
} // end DisplaySavingsAccount


/**
 * @brief Display the user menu, prompt for menu choice, and return the int value entered by the user.
 * 
 * This function utilizes a menu for the purpose of customer selection of account transction type.
 * 
 * @return user_selection User choice from menu.
*/
int PromptUserModification()
{
	int user_selection{};

	std::cout << std::endl << "Select the type of transction to be performed from the menu below:" << std::endl;
	std::cout << "\t1) Deposit" << std::endl;
	std::cout << "\t2) Withdraw" << std::endl;
	std::cin >> user_selection;
	std::cin.ignore();

	return user_selection;
} // end PromptUserModification


/**
 * @brief Prompt user for account number and transction type, and perform transctions.
 * 
 * This function prompts the user for their account number and utilizes and if statement to check its validity. Upon
 * verification, the function promts the user for a transaction to perform and executes transction by calling methods
 * of the objects whose addresses are pointed to by pointers stored in the vector.
 * 
 * @param accounts Vector containing Account superclass type pointers.
 * @return Void.
*/
void AccountModification(std::vector<Account*>& accounts) // LO3, LO7
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