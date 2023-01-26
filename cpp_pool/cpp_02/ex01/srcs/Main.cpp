/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:01:03 by nadesjar          #+#    #+#             */
/*   Updated: 2023/01/03 16:35:59 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/class/Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42667799f);
	Fixed const	d(b);

	a = Fixed(12345678.4321f);

	std::cout << "a is: " << a << std::endl;
	std::cout << "b is: " << b << std::endl;
	std::cout << "c is: " << c << std::endl;
	std::cout << "d is: " << d << std::endl;

	std::cout << "a is: " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is: " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is: " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is: " << d.toInt() << " as integer" << std::endl;

	return (0);
}
