/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 18:51:32 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/09 22:31:34 by mikuiper      ########   odam.nl         */
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
	private:
		int	index;
		int	n_contacts;
		Contact contacts[8];
	public:
		phonebook();
		~phonebook();
};

void	add_contact(PhoneBook *phonebook);
void	search_contact(PhoneBook *phonebook);

#endif