/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:01:01 by nadesjar          #+#    #+#             */
/*   Updated: 2022/11/29 14:11:17 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(int const nbr);

		Fixed(const float);

		~Fixed(void);
		
		void	setRawBits(const int raw);

		Fixed	&operator=(Fixed const &src);
		float	toFloat(void) const;
		int		getRawBits(void) const;
		int		toInt(void) const;

	private:
		static const int	_nbrBits = 8;
		int					_nbr;
};

std::ostream	&operator<<(std::ostream &o, Fixed const & i);

#endif
