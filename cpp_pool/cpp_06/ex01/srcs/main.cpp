/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 10:45:56 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/07 11:13:58 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serialize.hpp"

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data		*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Usage: " << argv[0] << " [string] [number]" << std::endl;
		return 1;
	}
	Data	*data = new Data;
	data->str = argv[1];
	data->nbr = atoi(argv[2]);

	uintptr_t	serialized = serialize(data);
	Data		*deserialized = deserialize(serialized);

	std::cout << "Data str: " << data->str << std::endl;
	std::cout << "Data nbr: " << data->nbr << std::endl;
	std::cout << std::endl;
	std::cout << "Serialized return: " << serialized << std::endl;
	std::cout << "Deserialized return:" << deserialized << std::endl;
	std::cout << std::endl;
	std::cout << "Serialized str: " << deserialized->str << std::endl;
	std::cout << "Serialized nbr: " << deserialized->nbr << std::endl;

	delete data;
	return 0;
}
