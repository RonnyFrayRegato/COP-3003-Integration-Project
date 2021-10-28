// file: main.cpp
// by:   Ronny Fray Regato
// org:  COP 3003, 202108, 80602
// desc: banking app that allows user to create or review account(s) and perform transactions
// --------------------------------------------------------

#include <iostream>

#include "Account.h"
#include "CheckingAccount.h"

// function prototypes
int PromptUser();

int main()
{
	int menu_choice;
	Account account1;

	// main loop for user selection
	bool loop = true;
	do
	{
		menu_choice = PromptUser();

		if (menu_choice == 1)
		{
			// functions related to creating a new account
			account1.CreateAccount();
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