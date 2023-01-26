/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 19:59:51 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/01 20:02:51 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Intern
{
    public:
        Intern(void);
        Intern(Intern const & src);
        ~Intern(void);

        Intern 			&operator=(Intern const &rhs);

    //*************************************************************************//
        // Change values //

        Form			*makeForm(std::string const &formName, std::string const &target);

    //*************************************************************************//
        // Exceptions //
        
        class FormNotFoundException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        
    //*************************************************************************//
    
    private:
        Form			*makeShrubberyCreationForm(std::string const &target);
        Form			*makeRobotomyRequestForm(std::string const &target);
        Form			*makePresidentialPardonForm(std::string const &target);
};

#endif
