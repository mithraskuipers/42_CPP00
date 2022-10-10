/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contacts.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 11:24:14 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/10 12:02:21 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include "../includes/libraries.hpp"

class Contact
{
	public:
		Contact(void) {};
		~Contact(void) {};
		void	add_contact(void);
		void	show_contact(void);
		void	print_contact(void);
	private:
		std::string	_FirstName;
		std::string	_LastName;
		std::string	_NickName;
		std::string	_PhoneNumber;
		std::string	_Secret;
};

#endif