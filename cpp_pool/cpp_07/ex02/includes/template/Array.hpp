/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:10:09 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/07 15:19:52 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	public:
		Array(void)
		{
			_array = new T[0];
			_size = 0;
		}
		Array(unsigned int n)
		{
			_array = new T[n];
			_size = n;
		}
		Array(Array const &src)
		{
			*this = src;
		}
		~Array(void)
		{
			delete [] _array;
		}

		Array &operator=(Array const &rhs)
		{
			if (this != &rhs)
			{
				delete [] _array;
				_size = rhs._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = rhs._array[i];
			}
			return (*this);
		}
		
		T &operator[](unsigned int i)
		{
			if (i >= _size)
				throw std::exception();
			return (_array[i]);
		}
		
		unsigned int size(void) const
		{
			return (_size);
		}
		
	private:
		T* _array;
		unsigned int _size;
};

template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &rhs)
{
	o << "Array size: " << rhs.size() << std::endl;
	for (unsigned int i = 0; i < rhs.size(); i++)
		o << "Array[" << i << "]: " << rhs[i] << std::endl;
	return (o);
}

#endif
