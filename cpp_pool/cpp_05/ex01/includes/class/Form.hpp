/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 15:25:00 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/01 17:03:33 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

# include <iostream>
# include <exception>

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(Form const &copy);
		~Form();

		Form	&operator=(Form const &rhs);

	//*********************************************************************//
		// Change values //
		void	beSigned(Bureaucrat const &bureaucrat);
		
		// Getters //
		std::string const	getName() const;
		bool	getIsSigned() const;
		int		getGradeToSign() const;
		int		getGradeToExecute() const;

	//*********************************************************************//
		// Exceptions //
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	//*********************************************************************//

	private:
		std::string const	_name;
		
		bool		_isSigned;
		int const	_gradeToSign;
		int const	_gradeToExecute;
};

std::ostream &operator<<(std::ostream &out, Form const &rhs);

#endif
