/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:41:31 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/17 18:22:08 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <sstream>

class Convert
{
	public:
		Convert(void);
		Convert(std::string const &str);
		Convert(Convert const &src);
		~Convert();

		Convert &operator=(Convert const &src);

		void	printConversion();

	private:
		std::string	const	_str;
		long double			_nbr;
		bool				_isNumber;
		void				detectType();
};

#endif
