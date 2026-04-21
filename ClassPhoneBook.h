#ifndef CLASSPHONEBOOK_H
# define CLASSPHONEBOOK_H

# include <string>
# include <iostream>
# include <iomanip>
# include "ClassContact.h"

class PhoneBook
{
	public:
		PhoneBook() : contact_count(0) {}
		void	search();
		void	add();

	private:
		int		contact_count;
		Contact	contact_arr[8];

};

#endif
