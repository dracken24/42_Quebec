/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:52:39 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/10 21:14:40 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
Form("ShrubberyCreationForm", 145, 137), _target("default")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) :
Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor named: " << _target << " called" << std::endl;
	
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) :
Form(src), _target(src.getTarget())
{
	std::cout << "ShrubberyCreationForm copy constructor" << _target << " called" << std::endl;
	
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor nmaed: " << _target << " called" << std::endl;
	
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	std::cout << "ShrubberyCreationForm assignation operator called" << std::endl;
	
	if (this != &rhs)
	{
		Form::operator=(rhs);
	}
	return (*this);
}

//*****************************************************************************/
// Getters //

std::string const	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

//*****************************************************************************/
// Action //

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	else
	{
		std::ofstream	ofs((this->_target + "_shrubbery").c_str());
		if (ofs.is_open())
		{
			ofs << "       _-_" << std::endl;
			ofs << "    /~~   ~~\\" << std::endl;
			ofs << " /~~         ~~\\" << std::endl;
			ofs << "{               }" << std::endl;
			ofs << " \\  _-     -_  /" << std::endl;
			ofs << "   ~  \\\\ //  ~" << std::endl;
			ofs << "_- -   | | _- _" << std::endl;
			ofs << "  _ -  | |   -_" << std::endl;
			ofs << "      // \\\\" << std::endl;
			ofs.close();
		}
	}
}
