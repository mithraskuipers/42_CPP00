/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 11:24:39 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/10 11:57:33 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
	public:
		PhoneBook(void) {};
		~PhoneBook(void) {};
		void	add_contact(void);
		void	search_contact(void);
		void	show_phonebook(void);
		Contact	get_contact(int contact_nbr);
	private:
		Contact _contacts[8];
		int		_nbr_of_contacts;
};

#endif