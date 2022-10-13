/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 08:35:06 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/13 10:39:03 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "libraries.hpp"

class Contact
{
	public:
		Contact();
		~Contact();
		void	input_contact(int index);
		void	print_contact_preview(int max_chars);
		void	print_contact_all(void);
		void	update_index(int index);
	private:
		int			_index;
		std::string	_FirstName;
		std::string	_LastName;
		std::string	_NickName;
		std::string	_PhoneNumber;
		std::string	_DarkestSecret;
};

#endif
