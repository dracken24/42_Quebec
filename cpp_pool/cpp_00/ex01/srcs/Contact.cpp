/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:09:27 by nadesjar          #+#    #+#             */
/*   Updated: 2022/09/13 13:35:13 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::ChangeContact(void)
{
	std::cout << std::endl;
	std::cout << "Enter First Name: " << std::endl;
	std::cin >> this->_first_name;
	std::cout << "Enter Last Name: " << std::endl;
	std::cin >> this->_last_name;
	std::cout << "Enter a Nickname: " << std::endl;
	std::cin >> this->_nickname;
	std::cout << "Enter a Phone number: " << std::endl;
	std::cin >> this->_phone;
	std::cout << "Just for fun, what is your darkest secret??" << std::endl;
	std::cin >> this->_d_secret;
	std::cout << std::endl;
}

std::string	Contact::ReturnFname(void) const
{
	return (this->_first_name);
}

std::string Contact::ReturnLname(void) const
{
	return (this->_last_name);
}

std::string Contact::ReturnNick(void) const
{
	return (this->_nickname);
}

std::string Contact::ReturnPhone(void) const
{
	return (this->_phone);
}

std::string Contact::ReturnSecret(void) const
{
	return (this->_d_secret);
}
