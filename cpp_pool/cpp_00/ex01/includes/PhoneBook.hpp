/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:08:04 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/11 13:41:45 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "../includes/Contact.hpp"
#include <iostream>
#include <string>

void	PutStrRight(char *str);

class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);

	void	Search(int nbr_ct) const;
	void	Add(int i);
	void	Exit(void);
	
	int		ChooseAction(void) const;
	
	void	SearchContacts(PhoneBook *repertoire, int nbr_ct) const;
	void	AfficheContact(std::string *str, int nbr_ct) const;
	void	ListContacts(int nbr_ct) const;
	void	PutStrRight(std::string str) const;

private:
	Contact 	_tab[8];
};

#endif