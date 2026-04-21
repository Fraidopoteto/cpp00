#include <iostream>
#include <string>
#include "ClassPhoneBook.h"
#include "ClassContact.h"


int main()
{
	std::string user_input;
	PhoneBook	PhoneBook_Obj;

	bool		is_running = true;

	std::cout << "Enter one of three methods: ADD, SEARCH or EXIT\n";

	while (is_running)
	{
		std::getline(std::cin, user_input);

		if (user_input == "ADD")
			PhoneBook_Obj.add();

		if (user_input == "SEARCH")
			PhoneBook_Obj.search();

		if (user_input == "EXIT")
			is_running = false;
	}
}
