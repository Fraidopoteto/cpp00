#include "ClassContact.h"


Contact::Contact()
{

}


//========= SET FUNCTIONS =========

void Contact::set_first_name(std::string user_input)
{
	this->first_name = user_input;
}

void Contact::set_last_name(std::string user_input)
{
	this->last_name = user_input;
}

void Contact::set_nickname(std::string user_input)
{
	this->nickname = user_input;
}

void Contact::set_phone_number(std::string user_input)
{
	this->phone_number = user_input;
}

void Contact::set_darkest_secret(std::string user_input)
{
	this->darkest_secret = user_input;
}

void Contact::set_contact_idx(int contact_count)
{
	this->contact_idx = contact_count;
}


//========= GET FUNCTIONS =========

std::string Contact::get_first_name(void) const
{
	return(this->first_name);
}

std::string Contact::get_last_name(void) const
{
	return(this->last_name);
}

std::string Contact::get_nickname(void) const
{
	return(this->nickname);
}

std::string Contact::get_phone_number(void) const
{
	return(this->phone_number);
}

std::string Contact::get_darkest_secret(void) const
{
	return(this->darkest_secret);
}

int Contact::get_contact_idx(void) const
{
	return(this->contact_idx);
}
