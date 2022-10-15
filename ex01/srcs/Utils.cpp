/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Utils.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 14:41:26 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/15 12:10:53 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Libraries.hpp"

void	print_intro(void)
{
	std::cout << "Welcome to the phonebook program." << std::endl;
	std::cout << "Please consult the following list of available options:\n" << std::endl;
	std::cout << "[ADD]\t\tTo add a new contact." << std::endl;
	std::cout << "[SEARCH]\tTo retrieve information from a specific contact." << std::endl;
	std::cout << "[EXIT]\t\tTo exit the phonebook program.\n" << std::endl;
}

void	print_outro(void)
{
	std::cout << "\n\nThank you for using the phonebook program." << std::endl;
	std::cout << "We take utmost care to ensure you are enjoying the phonebook program." << std::endl;
	std::cout << "To leave customer feedback please reach out to mithraskuipers@gmail.com." << std::endl;
}

int	ft_isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}

static int	ft_iswhitespace(int c)
{
	if ((c == ' ') || (c == '\t') || (c == '\v') || (c == '\r') || (c == '\n') \
	|| (c == '\f'))
		return (1);
	return (0);
}

int	ft_atoi(std::string s)
{
	int	value;
	int	i;
	int	sign;

	i = 0;
	while (ft_iswhitespace(s[i]))
		i++;
	value = 0;
	sign = 1;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		value = (value * 10) + (s[i] - '0');
		i++;
	}
	return (value * sign);
}
