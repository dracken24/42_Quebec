/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:11:02 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/10 21:17:23 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"
# include <iostream>
# include <exception>

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const & name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		Bureaucrat 			&operator=(Bureaucrat const &rhs);

		void				incrementGrade(int grade);
		void				decrementGrade(int grade);
		void				signForm(Form &form);
		
		std::string const	getName(void) const;
		int					getGrade(void) const;

		void			executeForm(Form const & form);

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

	private:
		
		std::string const	_name;
		int					_grade;
};

std::ostream &operator<<(std::ostream&o, const Bureaucrat &rhs);

#endif
