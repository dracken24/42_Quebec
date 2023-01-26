/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 19:10:37 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/10 21:15:32 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
Form("RobotomyRequestForm", 72, 45), _target("default")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) :
Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor named: " << _target << " called" << std::endl;
	
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) :
Form(src), _target(src.getTarget())
{
	std::cout << "RobotomyRequestForm copy constructor" << _target << " called" << std::endl;
	
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor nmaed: " << _target << " called" << std::endl;
	
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	std::cout << "RobotomyRequestForm assignation operator called" << std::endl;
	
	if (this != &rhs)
	{
		Form::operator=(rhs);
	}
	return (*this);
}

//*****************************************************************************/
// Getters //

std::string const   RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

//*****************************************************************************/
// Action //

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!getIsSigned())
		throw FormNotSignedException();
	else if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();

	std::cout << "Bziiiiitttttiiiiizzziiiiitttttt" << std::endl;
	
	srand(time(NULL));
	bool rand = (std::rand() % 2);
	if (rand)
		std::cout << getTarget() << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Ho no! " << getTarget() << " robotomization failed... this time" << std::endl;
}
