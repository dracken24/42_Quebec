/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 15:30:12 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/01 18:42:32 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/Form.hpp"

// Constructors

Form::Form(void) :
_name("Default"),
_isSigned(false),
_gradeToSign(150),
_gradeToExecute(150)
{
	std::cout << "Form default constructor named: " << _name << " called" << std::endl;
	
	return ;
}

Form::Form(std::string const name, int gradeToSign, int gradeToExecute) :
_name(name),
_isSigned(false),
_gradeToSign(gradeToSign),
_gradeToExecute(gradeToExecute)
{
	std::cout << "Form constructor named: " << _name << " called" << std::endl;

	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	
	return ;
}

Form::Form(Form const &copy) :
_name(copy._name),
_isSigned(copy._isSigned),
_gradeToSign(copy._gradeToSign),
_gradeToExecute(copy._gradeToExecute)
{
	std::cout << "Form copy constructor named: " << _name << " called" << std::endl;

	if (copy.getGradeToSign() < 1 || copy.getGradeToExecute() < 1)
		throw Form::GradeTooHighException();
	else if (copy.getGradeToSign() > 150 || copy.getGradeToExecute() > 150)
		throw Form::GradeTooLowException();

	return ;
}

// Destructor

Form::~Form(void)
{
	std::cout << "Form destructor named: " << _name << " called" << std::endl;
	
	return ;
}

// Operators

Form &Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		_isSigned = rhs._isSigned;
	}
	if (rhs.getGradeToSign() < 1 || rhs.getGradeToExecute() < 1)
		throw Form::GradeTooHighException();
	else if (rhs.getGradeToSign() > 150 || rhs.getGradeToExecute() > 150)
		throw Form::GradeTooLowException();
		
	return (*this);
}

//***************************************************************************************
// Change values //

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= _gradeToSign)
		_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

// Getters //

std::string const	Form::getName(void) const
{
	return (_name);
}

bool				Form::getIsSigned(void) const
{
	return (_isSigned);
}

int					Form::getGradeToSign(void) const
{
	return (_gradeToSign);
}

int					Form::getGradeToExecute(void) const
{
	return (_gradeToExecute);
}

//***************************************************************************************
// Exceptions //

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

//***************************************************************************************
// Output stream overload

std::ostream &operator<<(std::ostream &out, Form const &rhs)
{
	out << "Form name: " << rhs.getName() << std::endl;
	out << "Form grade to sign: " << rhs.getGradeToSign() << std::endl;
	out << "Form grade to execute: " << rhs.getGradeToExecute() << std::endl;
	out << "Form is signed: " << rhs.getIsSigned() << std::endl;
	return (out);
}
