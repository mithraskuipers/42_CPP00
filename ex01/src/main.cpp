/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 22:36:01 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/11 17:45:42 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/contacts.hpp"
#include "../includes/phonebook.hpp"
#include "../includes/libraries.hpp"

void	Contact::input_contact(void)
{
	std::cout << "\nAdding new contact..\n" << std::endl;
	std::cout << "First name: ";
	std::cin >> this->FirstName;
	// std::cout << "Last name: ";
	// std::cin >> this->_LastName;
	// std::cout << "Nick name: ";
	// std::cin >> this->_NickName;
	// std::cout << "Phone number: ";
	// std::cin >> this->_PhoneNumber;
	// std::cout << "Secret: ";
	// std::cin >> this->_Secret;
	std::cout << "\nSuccesfully added new contact!" << std::endl;
	return ;
}

/*
void	PhoneBook::add_contact(void)
{
	Contact tmp;

	tmp.input_contact();
	
	for (int i = this->_nbr_of_contacts; i > 0; i--)
		this->_contacts[i] = this->_contacts[i - 1];
	this->_contacts[0] = tmp;
	if (this->_nbr_of_contacts == MAX_N_CONTACTS)
		return ;
	else
		this->_nbr_of_contacts = this->_nbr_of_contacts + 1;
		return ;
}
*/

void	PhoneBook::add_contact(void)
{
	int used = this->_nbr_of_contacts;
	int i;

	if(used <= 7)
	{
		std::cout << "Introduzca nombre\n";
		std::getline(std::cin, this->_contacts[used].FirstName);
		std::cout << "Introduzca apellido\n";
		std::getline(std::cin, this->_contacts[used].LastName);
		std::cout << "introduzca apodo\n";
		std::getline(std::cin, this->_contacts[used].NickName);
		std::cout << "Introduzca teléfono\n";
		std::getline(std::cin, this->_contacts[used].PhoneNumber);
		std::cout << "introduzca secrreto más oscuro\n";
		std::getline(std::cin, this->_contacts[used].Secret);
		this->_nbr_of_contacts++;
	}
	else
	{
		i = 1;
		this->_contacts[0].~Contact();
		while(i < 8)
		{
			this->_contacts[i-1] = this->_contacts[i];
			i++;
		}
		this->_nbr_of_contacts = 7;
		PhoneBook::add_contact();
	}
	return;
}


PhoneBook::PhoneBook()
{
	this->_nbr_of_contacts = 0;
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void	Contact::print_contact(void)
{
	std::cout << this->FirstName << std::endl;
	// std::cout << this->_LastName << std::endl;
	// std::cout << this->_NickName << std::endl;
	// std::cout << this->_PhoneNumber << std::endl;
	// std::cout << this->_Secret << std::endl;
	return;
}

void	PhoneBook::print_phonebook(void)
{
	Contact	current_contact;
	std::cout << "\nYou have " << this->_nbr_of_contacts << " entries in your phonebook" << std::endl;
	int	i;

	i = 0;
	/*
	if (this->_nbr_of_contacts < MAX_N_CONTACTS)
	{
		current_contact = this->_contacts[i];
		current_contact.print_contact();
		i++;
	}
	else
	{
		i = this->_nbr_of_contacts;
		while (i > 0)
		{
			current_contact = this->_contacts[i];
			current_contact.print_contact();
			i--;
		}
	}
	*/
	return ;
}

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string	input_line;

	std::cout << "Welcome to the phonebook program." << std::endl;
	std::cout << "Please consult the following list of available options:\n" << std::endl;
	std::cout << "[EXIT]\t\tTo exit the phonebook program." << std::endl;
	std::cout << "[ADD]\t\tTo add a new contact." << std::endl;
	std::cout << "[SEARCH]\tTo retrieve information from a specific contact.\n" << std::endl;
	while (true)
	{
		std::cout << "\nWhat would you like to do?" << std::endl;
		if (!std::getline(std::cin, input_line))
			std::exit(1);
		if (input_line.compare("EXIT") == 0)
		{
			break;
		}
		else if (input_line.compare("ADD") == 0)
		{
			PhoneBook.add_contact();
		}
		else if (input_line.compare("SEARCH") == 0)
		{
			continue;
			//PhoneBook.search_contact();
		}
		else
		{
			std::cout << "Choose between [ADD], [SEARCH] or [EXIT]." << std::endl;
		}
		input_line.clear();
		std::cin.clear();
	}
	//PhoneBook.print_phonebook();
	std::cout << "\n\nThank you for using the phonebook program." << std::endl;
	std::cout << "We take utmost care to ensure you are enjoying the phonebook program." << std::endl;
	std::cout << "To leave customer feedback please reach out to mithraskuipers@gmail.com." << std::endl;
	return (0);
}
