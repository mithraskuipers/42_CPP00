/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 18:51:32 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/09/28 19:40:04 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>

class Contact
{
	public:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
};

class PhoneBook
{
	public:
		int	index;
		int	n_contacts;
		Contact contacts[8];
};

void	add_contact(PhoneBook *phonebook);
void	search_contact(PhoneBook *phonebook);

#endif