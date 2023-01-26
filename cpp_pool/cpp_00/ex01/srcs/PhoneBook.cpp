/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:00:12 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/01 23:57:03 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

int		PhoneBook::ChooseAction(void) const
{
	int		ret;
	std::string cmd;

	ret = 0;
	std::cout << "Veillez choisir une action: ADD, SEARCH, EXIT:"<< std::endl;
	std::cin >> cmd;

	if (cmd == "ADD")
		ret = 1;
	else if (cmd == "SEARCH")
		ret = 2;
	else if (cmd == "EXIT")
		ret = 3;
	else
	{
		std::cout << std::endl;
		std::cout << "--Wrong entry--" << std::endl;
		std::cout << std::endl;
	}
	
	return (ret);
}

void	PhoneBook::Add(int i)
{
	this->_tab[i - 1].ChangeContact();
	return;
}

void	PhoneBook::Search(int nbr_ct) const
{
	std::string str;

	if (nbr_ct == 1)
	{
		std::cout << std::endl << "--Enter contact first--" << std::endl << std::endl;
		return;
	}
	else
	{
		this->ListContacts(nbr_ct);
		std::cout << "Enter The index for see all the information" << std::endl;
		std::cin >> str;
		this->AfficheContact(&str, nbr_ct);
	}
	
	return;
}

void	PhoneBook::AfficheContact(std::string *str, int nbr_ct) const
{
	int nbr = std::atoi(str->c_str());
	
	std::cout << std::endl << nbr << " :" << std::endl;
	std::cout << "-------------";
	if (nbr > 0 && nbr < 9 && nbr < nbr_ct)
	{
		std::cout << std::endl;
		std::cout << "First Name  : " << this->_tab[nbr - 1].ReturnFname() << std::endl;
		std::cout << "Last Name   : " << this->_tab[nbr - 1].ReturnLname() << std::endl;
		std::cout << "Nickname    : " << this->_tab[nbr - 1].ReturnNick() << std::endl;
		std::cout << "Phone       : " << this->_tab[nbr - 1].ReturnPhone() << std::endl;
		std::cout << "Dark Secret : " << this->_tab[nbr - 1].ReturnSecret() << std::endl;
		std::cout << "-------------" << std::endl;
		std::cout << std::endl;
		return;
	}
	else
	{
		std::cout << std::endl;
		std::cout << "--Wrong index--" <<std::endl;
		std::cout << std::endl;
		this->Search(nbr_ct);
	}
	return;
}

void	PhoneBook::ListContacts(int nbr_ct) const
{
	int	i = -1;

	while (++i < nbr_ct - 1)
	{
		std::cout << std::endl;
		std::cout << i + 1 << "  |  ";
		this->PutStrRight(this->_tab[i].ReturnFname());
		std::cout << "  |  ";
		this->PutStrRight(this->_tab[i].ReturnLname());
		std::cout << "  |  ";
		this->PutStrRight(this->_tab[i].ReturnNick());
	}
	std::cout << std::endl;
	std::cout << std::endl;
	return;
}

void	PhoneBook::PutStrRight(std::string str) const
{
	int ct = 1;
	int i =  str.length();
	int	k =  -1;
	int r =  10 - i + 1;
	while (--r > 0)
		std::cout << ' ';
	i = -1;
	while (++k < 10 && ++i < (int)str.length())
	{
		if (str.length() == 10)
		{
			std::cout << str;
			break;
		}
		if (ct >= 10)
			std::cout << '.';
		else
			std::cout << str[i];
		ct++;
	}
	// std::cout << std::endl << "TEST" << str << std::endl;
	return;
}

void	PhoneBook::SearchContacts(PhoneBook *repertoire, int nbr_ct) const
{
	repertoire->Search(nbr_ct);
}
