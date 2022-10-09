/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add_contact.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 19:02:25 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/09/28 19:28:07 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static void	update_index(PhoneBook *phonebook)
{
	if (phonebook->index == 7)
	{
		phonebook->index = 0;
	}
	else
	{
		phonebook->index = phonebook->index + 1;
	}
	if (phonebook->n_contacts < 8)
	{
		phonebook->n_contacts = phonebook->n_contacts + 1;
	}
}

void	add_contact(PhoneBook *phonebook)
{
	Contact *new_contact;

	std::cout << std::endl;
	new_contact = &phonebook->contacts[phonebook->index];
	std::cout << "First name: ";
	std::getline (std::cin, new_contact->FirstName);
	std::cout << "Last name: ";
	std::getline (std::cin, new_contact->LastName);
	std::cout << "Nickname: ";
	std::getline (std::cin, new_contact->NickName);
	std::cout << "Phone number: ";
	std::getline (std::cin, new_contact->PhoneNumber);
	std::cout << "Darkest secret: ";
	std::getline (std::cin, new_contact->DarkestSecret);
	update_index(phonebook);
	std::cout << "You have added a new contact!" << std::endl;
	std::cout << std::endl;
}
