/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:02:34 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/11 13:40:55 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
public:
	Contact(void);
	~Contact(void);
	
	void	ChangeContact(void);
	void	DeleteContact(void);
	
	std::string ReturnSecret(void) const;
	std::string ReturnPhone(void) const;
	std::string ReturnFname(void) const;
	std::string ReturnLname(void) const;
	std::string ReturnNick(void) const;
	
	
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone;
	std::string	_d_secret;
};

#endif