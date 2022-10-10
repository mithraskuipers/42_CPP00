/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 22:36:01 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/10 13:20:21 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/contacts.hpp"
#include "../includes/phonebook.hpp"
#include "../includes/libraries.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string	input_line;

	std::cout << "Welcome to the phonebook program." << std::endl;
	std::cout << "Please consult the following list of available options:\n" << std::endl;
	std::cout << "[EXIT]\t\tTo exit the phonebook program." << std::endl;
	std::cout << "[ADD]\t\tTo add a new contact." << std::endl;
	std::cout << "[SEARCH]\tTo retrieve information from a specific contact." << std::endl;
	while (std::getline(std::cin, input_line))
	{
		//show_prompt(&input_line);
		if (input_line.compare("EXIT") == 0)
		{
			break;
		}
		else if (input_line.compare("ADD") == 0)
		{
			continue;
			//add_contact();
		}
		else if (input_line.compare("SEARCH") == 0)
		{
			continue;
			//search_context();
		}
		else
		{
			std::cout << "Error: Invalid option." << std::endl;
			std::cout << "Please try [ADD], [SEARCH] or [EXIT]." << std::endl;
		}
		input_line.clear();
	}
	std::cout << "\n\nThank you for using the phonebook program." << std::endl;
	std::cout << "We take utmost care to ensure you are enjoying the phonebook program." << std::endl;
	std::cout << "To leave customer feedback, please reach out to mithraskuipers@gmail.com." << std::endl;
	return (0);
}
