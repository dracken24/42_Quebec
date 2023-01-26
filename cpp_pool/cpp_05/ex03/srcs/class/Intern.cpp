/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 20:00:40 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/01 20:03:54 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../..//includes/class/Intern.hpp"
#include "../..//includes/class/PresidentialPardonForm.hpp"
#include "../..//includes/class/RobotomyRequestForm.hpp"
#include "../..//includes/class/ShrubberyCreationForm.hpp"

Intern::Intern(void)
{
    std::cout <<"Intern created" << std::endl;

    return ;
}

Intern::Intern(Intern const & src)
{
    std::cout <<"Intern created" << std::endl;
    *this = src;

    return ;
}

Intern::~Intern(void)
{
    std::cout <<"Intern destroyed" << std::endl;

    return ;
}

Intern & Intern::operator=(Intern const & rhs)
{
    (void)rhs;

    return *this;
}

//****************************************************************************//

Form *Intern::makeForm(std::string const & formName, std::string const & target)
{
    Form *form = NULL;

    if (formName == "shrubbery creation")
        form = new ShrubberyCreationForm(target);
    else if (formName == "robotomy request")
        form = new RobotomyRequestForm(target);
    else if (formName == "presidential pardon")
        form = new PresidentialPardonForm(target);
    else
        std::cout << "Form not found" << std::endl;
    return form;
}
