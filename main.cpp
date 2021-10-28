// file: main.cpp
// by:   Ronny Fray Regato
// org:  COP 3003, 202108, 80602
// desc: banking app that allows user to create or review account(s) and perform transactions
// --------------------------------------------------------

#include <iostream>

#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

// function prototypes
int PromptUser();
char AccountSelection();
void CreateCheckingAccount(CheckingAccount checking);
void DisplayCheckingAccount(CheckingAccount checking);
void CreateSavingsAccount(SavingsAccount savings);
void DisplaySavingsAccount(SavingsAccount savings);

int main()
{
	int menu_choice;
	char account_creation;

	// main loop for user selection
	bool loop = true;
	do
	{
		menu_choice = PromptUser();

		if (menu_choice == 1)
		{
			account_creation = AccountSelection();
			CheckingAccount checking;
			SavingsAccount savings;

			switch (account_creation)
			{
			case 'c':
			// {
				// functions related to creating a new checking account
				// CheckingAccount checking;
				CreateCheckingAccount(checking);
				// FutureFileFunction(CreateCheckingAccount);
				break;
			// }
			case 's':
				// functions related to creating a new savings account
				CreateSavingsAccount(savings);
				// FutureFileFunction(CreateSavingsAccount);
				std::cout << "TEST" << std::endl; // DELETE
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


char AccountSelection()
{
	char account_selection;

	std::cout << "Enter the type of account to create (c/s): " << std::endl;
	std::cin >> account_selection;
	std::cin.ignore();

	return account_selection;
} // end AccountSelection


/**
 N/A

 Parameters:

 Returns:
 N/A				N/A
*/
// void CreateAccount(Account* account1)
void CreateCheckingAccount(CheckingAccount checking)
{
	// Account* account = &checking;	Polymorhpishm
	std::string name;
	double initial_deposit;

	std::cout << "Enter your name: " << std::endl;
	std::cin >> name;
	// checking->SetName(name);
	checking.SetName(name);
	std::cin.ignore();

	std::cout << "Enter an initial deposit amount: " << std::endl;
	std::cin >> initial_deposit;
	// checking->SetBalance(initial_deposit);
	checking.SetBalance(initial_deposit);
	std::cin.ignore();

	std::cout << "Checking Account Created" << std::endl;
	DisplayCheckingAccount(checking);
} // end CreateCheckingAccount


void DisplayCheckingAccount(CheckingAccount checking)
{
	std::cout << "Your account number is: " << CheckingAccount::GetAccountNumber() << std::endl;
	std::cout << checking.GetName() << std::endl;
	std::cout << checking.GetBalance() << std::endl;
} // end DisplayCheckingAccount


void CreateSavingsAccount(SavingsAccount savings)
{
	std::string name;
	double initial_deposit;

	std::cout << "Enter your name: " << std::endl;
	std::cin >> name;
	// checking->SetName(name);
	savings.SetName(name);
	std::cin.ignore();

	std::cout << "Enter an initial deposit amount: " << std::endl;
	std::cin >> initial_deposit;
	// checking->SetBalance(initial_deposit);
	savings.SetBalance(initial_deposit);
	std::cin.ignore();

	std::cout << "Checking Account Created" << std::endl;
	DisplaySavingsAccount(savings);
} // end CreateSavingsAccount


void DisplaySavingsAccount(SavingsAccount savings)
{
	std::cout << "Your account number is: " << CheckingAccount::GetAccountNumber() << std::endl;
	std::cout << savings.GetName() << std::endl;
	std::cout << savings.GetBalance() << std::endl;
	std::cout << savings.GetInterestRate() << std::endl;
} // end DisplaySavingsAccount




/*


switch (account_creation)
			{
			case 'c':
				// functions related to creating a new checking account
				CheckingAccount checking;
				CreateCheckingAccount(checking);
				// FutureFileFunction(CreateCheckingAccount);
				break;
			case 's':
				// functions related to creating a new savings account
				// CreateSavingsAccount();
				// FutureFileFunction(CreateSavingsAccount);
				std::cout << "TEST" << std::endl; // DELETE
				break;
			}


*/