/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 19:26:26 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/10 21:19:12 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
Form("PresidentialPardonForm", 25, 5), _target("default")
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
	
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) :
Form("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm constructor named: " << _target << " called" << std::endl;
	
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) :
Form(src), _target(src.getTarget())
{
	std::cout << "PresidentialPardonForm copy constructor" << _target << " called" << std::endl;
	
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor nmaed: " << _target << " called" << std::endl;
	
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	std::cout << "PresidentialPardonForm assignation operator called" << std::endl;
	
	if (this != &rhs)
	{
		Form::operator=(rhs);
	}
	return (*this);
}

//*****************************************************************************/
// Getters //

std::string const   PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

//*****************************************************************************/
// Action //

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	else
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
