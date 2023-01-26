/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 19:25:36 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/10 21:17:56 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm(void);

		PresidentialPardonForm		&operator=(PresidentialPardonForm const &rhs);
	
	//****************************************************************************//

		// Getters //
		std::string const       getTarget(void) const;

		// Action //
		void					execute(Bureaucrat const & executor) const;

	//****************************************************************************//

	private:
		std::string const		_target;
};

#endif
