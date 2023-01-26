/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 10:45:09 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/07 11:05:52 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <cstdlib>
# include <stdint.h>

typedef struct Data
{
	std::string str;
	int 		nbr;
}	Data;

#endif
