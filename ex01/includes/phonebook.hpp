/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 08:34:53 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/13 17:36:52 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_N_CONTACTS 8
# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact(void);
		void	search_contact(void);
		void	search_print_phonebook(void);
		void	search_print_contact(void);
	private:
		int		_n_contacts;
		Contact	_contacts[MAX_N_CONTACTS];
};

#endif
