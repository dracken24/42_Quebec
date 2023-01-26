/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:01:01 by nadesjar          #+#    #+#             */
/*   Updated: 2023/01/10 23:48:04 by nadesjar         ###   ########.fr       */
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

		float	toFloat(void) const;
		int		getRawBits(void) const;
		int		toInt(void) const;

		Fixed	&operator=(Fixed const &src);
		
		Fixed	operator*(Fixed const &src) const;
		Fixed	operator/(Fixed const &src) const;
		Fixed	operator+(Fixed const &src) const;
		Fixed	operator-(Fixed const &src) const;

		bool	operator>(Fixed const &src) const;
		bool	operator<(Fixed const &src) const;
		bool	operator>=(Fixed const &src) const;
		bool	operator<=(Fixed const &src) const;
		bool	operator==(Fixed const &src) const;
		bool	operator!=(Fixed const &src) const;

		Fixed 	&operator++();
		Fixed 	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

		static Fixed	&min(Fixed &a, Fixed &b);
		static Fixed	min(const Fixed &a, const Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static Fixed	max(const Fixed &a, const Fixed &b);

	private:
		static const int	_nbrBits = 4;
		int					_nbr;
};

std::ostream	&operator<<(std::ostream &o, Fixed const & i);

#endif
