/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:06:25 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/01 19:55:20 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/class/ShrubberyCreationForm.hpp"
#include "../includes/class/RobotomyRequestForm.hpp"
#include "../includes/class/PresidentialPardonForm.hpp"
#include "../includes/class/Bureaucrat.hpp"
#include "../includes/class/Form.hpp"

int main(void)
{
	Bureaucrat larbin1("BabyShark", 20);
	ShrubberyCreationForm form1("Mashmallow Trees");

	std::cout << std::endl;
	std::cout << larbin1;
	std::cout << std::endl;
	
	larbin1.signForm(form1);
	larbin1.executeForm(form1);
	std::cout << std::endl;

	Bureaucrat larbin2("DadyShark", 46);
	RobotomyRequestForm form2("Andrew");

	std::cout << std::endl;
	std::cout << larbin2;
	std::cout << std::endl;
	
	larbin2.signForm(form2);
	larbin2.executeForm(form2);
	larbin1.executeForm(form2);
	std::cout << std::endl << std::endl;

	Bureaucrat larbin3("ChuckNoShark", 2);
	PresidentialPardonForm form3("Pam");

	std::cout << std::endl;
	std::cout << larbin3;
	std::cout << std::endl;
	
	larbin2.signForm(form3);
	larbin3.signForm(form3);
	larbin3.executeForm(form3);

	std::cout << std::endl;

    return 0;
}
