#ifndef	CLASSCONTACT_H
# define CLASSCONTACT_H

# include <iostream>

class Contact
{
	public:
		Contact();

		void		set_first_name(std::string user_input);
		void		set_last_name(std::string user_input);
		void		set_nickname(std::string user_input);
		void		set_phone_number(std::string user_input);
		void		set_darkest_secret(std::string user_input);
		void		set_contact_idx(int contact_count);

		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_phone_number(void) const;
		std::string	get_darkest_secret(void) const;
		int			get_contact_idx(void) const;

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
		int			contact_idx;
};

#endif
