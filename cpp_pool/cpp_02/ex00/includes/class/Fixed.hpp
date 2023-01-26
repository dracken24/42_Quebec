/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:01:01 by nadesjar          #+#    #+#             */
/*   Updated: 2022/12/05 14:46:44 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(int const nbr);
		~Fixed(void);

		Fixed	&operator=(const Fixed &); // Operator d'affectation

		void	setRawBits(const int raw);
		int		getRawBits(void) const;

	private:
		static const int	_nbrBits = 8;
		int					_nbr;
};

#endif
