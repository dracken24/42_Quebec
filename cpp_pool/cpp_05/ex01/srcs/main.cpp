/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:06:25 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/01 17:10:43 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/class/Bureaucrat.hpp"
#include "../includes/class/Form.hpp"

int main(void)
{
	Bureaucrat larbin1("ChuckNoShark", 1);
	Bureaucrat larbin2("BabyShark", 44);
	std::cout << std::endl;
	std::cout << larbin1 << std::endl;
	std::cout << larbin2 << std::endl;

	Form form("TopSecret", 1, 1);
	Form form2("OpenDoc", 55, 27);
	std::cout << std::endl;
	std::cout << form << std::endl;
	std::cout << form2 << std::endl;

	std::cout << std::endl;
	
	larbin2.signForm(form);
	larbin2.signForm(form2);
	std::cout << std::endl;
	std::cout << form << std::endl;
	std::cout << form2 << std::endl;

	std::cout << std::endl;

	larbin1.signForm(form);
	larbin1.signForm(form2);
	std::cout << std::endl;
	std::cout << form << std::endl;
	std::cout << form2 << std::endl;

    return 0;
}
