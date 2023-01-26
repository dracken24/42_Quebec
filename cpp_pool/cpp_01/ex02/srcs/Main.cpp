/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:27:57 by nadesjar          #+#    #+#             */
/*   Updated: 2022/08/23 19:40:47 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPtr = &str;
	std::string &strRef = str;
	
	/** Print Ptr **/
	std::cout << &str << std::endl;
	std::cout << strPtr << std::endl;
	std::cout << &strRef << std::endl;

	/** Print Value **/
	std::cout << str << std::endl;
	std::cout << *strPtr << std::endl;
	std::cout << strRef << std::endl;

	return (0);
}
