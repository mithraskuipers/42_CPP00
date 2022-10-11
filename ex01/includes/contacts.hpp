/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contacts.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 11:24:14 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/11 17:44:58 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include "../includes/libraries.hpp"

class Contact
{
	public:
		Contact(void) {};
		~Contact(void) {};
		void	input_contact(void);
		void	show_contact(void);
		void	print_contact(void);
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	Secret;
};

#endif