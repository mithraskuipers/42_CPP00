/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 11:24:39 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/11 17:32:09 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_N_CONTACTS 3
#include "../includes/contacts.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact(void);
		void	search_contact(void);
		void	show_phonebook(void);
		void	init_phonebook(void);
		void	print_phonebook(void);
		Contact	get_contact(int contact_nbr);
	private:
		Contact _contacts[MAX_N_CONTACTS];
		int		_nbr_of_contacts;
};

#endif