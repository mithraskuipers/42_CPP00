/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search_contact.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 19:29:49 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/09/29 09:44:21 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static void	print_contact(Contact *contact_of_interest)
{
	if (contact_of_interest->FirstName.length() <= 10)
		std::cout << std::setw(10) << contact_of_interest->FirstName << "|";
	else
		std::cout << contact_of_interest->FirstName.substr(0, 9) + "." << "|";
	if (contact_of_interest->LastName.length() <= 10)
		std::cout << std::setw(10) << contact_of_interest->LastName << "|";
	else
		std::cout << contact_of_interest->LastName.substr(0, 9) + "." << "|";
	if (contact_of_interest->NickName.length() <= 10)
		std::cout << std::setw(10) << contact_of_interest->NickName << std::endl;
	else
		std::cout << contact_of_interest->NickName.substr(0, 9) + "." << std::endl;
}

static int	is_valid_input(std::string str)
{
	for (size_t i = 0; i < str.length() ; i++)
	{
		if (std::isdigit(str[i]) == 0)
			return (0);
	}
	return (1);
}

static void	prompt_search(PhoneBook *phonebook)
{
	std::string	input;
	int			index;

	std::cout << "Enter the index of your contact of interest: ";
	std::getline (std::cin, input);
	std::istringstream(input) >> index;
	if (is_valid_input(input))
	{
		if (index >= 0 && index < phonebook->n_contacts)
		{
			print_contact(&phonebook->contacts[index]);
			return ;
		}
	}
	std::cout << std::endl;
	std::cout << "Index not found" << std::endl;
	std::cout << std::endl;
}

static void	print_phonebook(PhoneBook *phonebook)
{
	Contact	*contact_of_interest;
	std::cout << std::endl;
	std::cout << "     Index|First name| Last name|  NickName|" << std::endl;
	for (int i = 0; i < phonebook->n_contacts; i++)
	{
		contact_of_interest = &phonebook->contacts[i];
		std::cout << std::setw(10) << i << "|";
		print_contact(contact_of_interest);
	}
}

void	search_contact(PhoneBook *phonebook)
{
	print_phonebook(phonebook);
	prompt_search(phonebook);
}
