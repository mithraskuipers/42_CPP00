/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 20:43:28 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/13 15:02:44 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/contact.hpp"

// Constructor
Contact::Contact(void)
{
	return ;
}

// Deconstructor
Contact::~Contact(void)
{
	return ;
}

void	putstr_truncate(std::string s, int max_chars)
{
	int			s_len;
	std::string	offset(max_chars, ' ');

	s_len = s.length();
	if (s_len <= max_chars)
	{
		std::cout << offset.substr(0, max_chars - s_len);
		std::cout << s;
	}
	else
	{
		std::cout << s.substr(0, max_chars - 1) << '.';
	}
	return ;
}

void	Contact::input_contact(int index)
{
	_index = index;
	std::cout << "\nFill in your contact's data:" << std::endl;
	std::cout << "First name:\t";
	std::getline(std::cin, _FirstName);
	std::cout << "Last name:\t";
	std::getline(std::cin, _LastName);
	std::cout << "Nickname:\t";
	std::getline(std::cin, _NickName);
	std::cout << "Phone number:\t";
	std::getline(std::cin, _PhoneNumber);
	std::cout << "Darkest secret:\t";
	std::getline(std::cin, _DarkestSecret);
}

// Setter function
void	Contact::update_index(int index)
{
	_index = index;
}

void	Contact::print_contact_preview(int max_chars)
{
	std::string	index_as_char;

	index_as_char = _index + '0';
	putstr_truncate(index_as_char, max_chars);
	std::cout << "|";
	putstr_truncate(_FirstName, max_chars);
	std::cout << "|";
	putstr_truncate(_LastName, max_chars);
	std::cout << "|";
	putstr_truncate(_NickName, max_chars);
	std::cout << std::endl;
}

void	Contact::print_contact_all(void)
{
	std::cout << "\n";
	std::cout << "First name:\t" << _FirstName << std::endl;
	std::cout << "Last name:\t" << _LastName << std::endl;
	std::cout << "Nickname:\t" << _NickName << std::endl;
	std::cout << "Phone number:\t" << _PhoneNumber << std::endl;
	std::cout << "Darkest secret:\t" << _DarkestSecret << std::endl;;
}
