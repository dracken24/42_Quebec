/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:15:40 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/10 21:11:09 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) :
_name("Default"),
_grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	
	return ;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) :
_name(name),
_grade(grade)
{
	std::cout << "Bureaucrat constructor named: " << _name << " called" << std::endl;

	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	std::cout << "Bureaucrat copy constructor" << _name << " called" << std::endl;

	if (src.getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (src.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		*this = src;

	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor nmaed: " << _name << " called" << std::endl;
	
	return ;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	std::cout << "Bureaucrat assignation operator called" << std::endl;

	if (rhs.getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (rhs.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = rhs.getGrade();
		
	return (*this);
}

//****************************************************************************//

std::string const Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade(int grade)
{
	std::cout << "Bureaucrat incrementGrade named: " << _name << " called" << std::endl;

	if (this->_grade - grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= grade;
}

void Bureaucrat::decrementGrade(int grade)
{
	std::cout << "Bureaucrat decrementGrade named: " << _name << " called" << std::endl;

	if (this->_grade + grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += grade;
}

void    Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

//****************************************************************************//

const char  *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char  *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

//****************************************************************************//

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade lvl: " << rhs.getGrade() << std::endl;
	return (o);
}
