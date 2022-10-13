/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 20:43:36 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/13 21:25:04 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Libraries.hpp"
#include "../includes/Prototypes.hpp"

// Constructor
PhoneBook::PhoneBook(void) : _n_contacts(-1)
{
}

// Deconstructor
PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::add_contact(void)
{
	int	index;

	index = 0;
	if (_n_contacts < (MAX_N_CONTACTS - 1))
	{
		_n_contacts++;
		_contacts[_n_contacts].input_contact(_n_contacts);
	}
	else
	{
		while (index < (MAX_N_CONTACTS - 1))
		{
			_contacts[index] = _contacts[index + 1];
			_contacts[index].update_index(index);
			index++;
		}
		_contacts[_n_contacts].input_contact(_n_contacts);
	}
	std::cout << std::endl;
	return ;
}

static void	print_colnames(void)
{
	std::string	line(43, '-');
	std::cout << "\n";
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	std::cout << line << std::endl;
	return ;
}

void	PhoneBook::print_contact(void)
{
	int			index;
	std::string	input_line;
	
	while (true)
	{
		std::cout << "Please enter an index" << std::endl;
		std::getline(std::cin, input_line);
		if (input_line == "\0")
			continue;
		index = ft_atoi(input_line);
		if ((index < 0) || (index > _n_contacts))
			continue;
		else
			break;
	}
	_contacts[index].print_contact_all();
	std::cout << std::endl;
	
	return ;
}

void	PhoneBook::search_contact(void)
{
	int	index;
	std::string	input_line;

	if (_n_contacts == -1)
	{
		std::cout << "\nThere is no contact to search." << std::endl;
		return ;
	}
	print_colnames();
	index = 0;
	while (index <= _n_contacts)
	{
		_contacts[index].print_contact_preview(10);
		index++;
	}
	std::cout << std::endl;
	this->print_contact();
	return ;
}
