/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 18:52:21 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/09/28 19:37:13 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	PhoneBook	phonebook;

	phonebook.index = 0;
	phonebook.n_contacts = 0;
	std::cout << "You have opened an old phonebook. Please enter ADD, SEARCH, or EXIT" << std::endl;
	for (std::string cmd; std::getline(std::cin, cmd);)
	{
		if (cmd == "ADD")
		{
			add_contact(&phonebook);
		}
		else if (cmd == "SEARCH")
		{
			search_contact(&phonebook);
		}
		else if (cmd == "EXIT")
		{
			break;
		}
		std::cout << "Please enter ADD, SEARCH, or EXIT" << std::endl;
	}
	return (0);
}
