/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 19:09:51 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/10 21:18:11 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm(void);

		RobotomyRequestForm		&operator=(RobotomyRequestForm const &rhs);
	
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
