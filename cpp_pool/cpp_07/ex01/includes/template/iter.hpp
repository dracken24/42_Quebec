/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:53:36 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/07 15:00:24 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T *array, int length, void (*f)(T const &src))
{
    for (int i = 0; i < length; i++)
        f(array[i]);
}

template <typename T>
void    print(T const &src)
{
    std::cout << src << std::endl;
}

#endif
