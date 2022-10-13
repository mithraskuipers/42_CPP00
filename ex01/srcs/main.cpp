/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 20:43:32 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/13 17:30:02 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Libraries.hpp"
#include "../includes/Prototypes.hpp"

int main(void)
{
	PhoneBook	PhoneBook;
	std::string	input_line;

	print_intro();
	while (true)
	{
		std::cout << "\nWhat would you like to do?" << std::endl;
		std::cout << "Choose between [ADD], [SEARCH] or [EXIT]." << std::endl;
		if (!std::getline(std::cin, input_line))
			std::exit(1);
		if (input_line.compare("EXIT") == 0)
			break;
		else if (input_line.compare("ADD") == 0)
			PhoneBook.add_contact();
		else if (input_line.compare("SEARCH") == 0)
			PhoneBook.search_contact();
		else
			std::cout << "Choose between [ADD], [SEARCH] or [EXIT]." << std::endl;
		input_line.clear();
		std::cin.clear();
	}
	print_outro();
	return (0);
}
