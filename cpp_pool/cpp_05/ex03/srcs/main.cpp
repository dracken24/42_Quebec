/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:06:25 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/01 20:34:24 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/class/ShrubberyCreationForm.hpp"
#include "../includes/class/RobotomyRequestForm.hpp"
#include "../includes/class/PresidentialPardonForm.hpp"
#include "../includes/class/Bureaucrat.hpp"
#include "../includes/class/Intern.hpp"
#include "../includes/class/Form.hpp"

int main(void)
{
	Intern newStagiaire;
	Form* formulaire;
	formulaire = newStagiaire.makeForm("robotomy request", "Bender");
	std::cout << std::endl;

	Bureaucrat larbin1("BabyShark", 20);
	std::cout << larbin1;
	larbin1.signForm(*formulaire);
	larbin1.executeForm(*formulaire);
	delete formulaire;
	std::cout << std::endl;


	formulaire = newStagiaire.makeForm("shrubbery creation", "Cotton candy island");
	larbin1.signForm(*formulaire);
	larbin1.executeForm(*formulaire);
	delete formulaire;
	std::cout << std::endl;

	formulaire = newStagiaire.makeForm("presidential pardon", "Bob Le Bricoleur");
	larbin1.signForm(*formulaire);
	larbin1.executeForm(*formulaire);
	delete formulaire;
	std::cout << std::endl;

	formulaire = newStagiaire.makeForm("Death Note", "Ryuk");
	delete formulaire;
	
	return 0;
}
