#include "ClassPhoneBook.h"

std::string format_column(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");

    return (str);
}

void PhoneBook::search()
{
    std::cout << std::setw(10) << std::right << "index" << "|"
              << std::setw(10) << std::right << "first name" << "|"
              << std::setw(10) << std::right << "last name" << "|"
              << std::setw(10) << std::right << "nickname" << std::endl;

	int i = 0;

    while (i < 8)
	{
        std::cout << std::setw(10) << std::right << (i + 1) << "|"
                  << std::setw(10) << std::right << format_column(contact_arr[i].get_first_name()) << "|"
                  << std::setw(10) << std::right << format_column(contact_arr[i].get_last_name()) << "|"
                  << std::setw(10) << std::right << format_column(contact_arr[i].get_nickname()) << std::endl;
		i++;
    }

	std::string user_input;
	int			idx;

	std::cout << "\nEnter index to display details: ";
	std::getline(std::cin, user_input);

	idx = user_input[0] - '1';

	std::cout << "First Name:     " << contact_arr[idx].get_first_name() << "\n";
            std::cout << "Last Name:      " << contact_arr[idx].get_last_name() << "\n";
            std::cout << "Nickname:       " << contact_arr[idx].get_nickname() << "\n";
            std::cout << "Phone Number:   " << contact_arr[idx].get_phone_number() << "\n";
            std::cout << "Darkest Secret: " << contact_arr[idx].get_darkest_secret() << std::endl;
}

void PhoneBook::add()
{
	bool		max_amount;

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	if (contact_count == 0)
		max_amount = false;

	if (contact_count == 8)
	{
		contact_count = 0;
		max_amount = true;
	}

	std::cout << "first name: ";
	std::getline(std::cin, first_name);

	contact_arr[contact_count].set_first_name(first_name);

	std::cout << "last name: ";
	std::getline(std::cin, last_name);

	contact_arr[contact_count].set_last_name(last_name);

	std::cout << "nickname: ";
	std::getline(std::cin, nickname);

	contact_arr[contact_count].set_nickname(nickname);

	std::cout << "phone number: ";
	std::getline(std::cin, phone_number);

	contact_arr[contact_count].set_phone_number(phone_number);

	std::cout << "darkest secret: ";
	std::getline(std::cin, darkest_secret);

	contact_arr[contact_count].set_darkest_secret(darkest_secret);

	contact_arr[contact_count].set_contact_idx(contact_count);

	contact_count++;
}
