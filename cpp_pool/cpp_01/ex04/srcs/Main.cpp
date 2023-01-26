/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:07:10 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/12 03:55:23 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void CpyString(std::string Name, std::fstream *Infile, std::string Find, std::string Replace)
{
	std::ofstream	Outfile;

	std::string		str;
	size_t			pos;
	
	Outfile.open(Name + ".replace");
	while (getline(*Infile, str))
	{
		pos = str.find(Find, 0);
		while (pos != std::string::npos)
		{
			str.erase(pos, Find.length());
			str.insert(pos, Replace);
			pos += Replace.length();
			pos = str.find(Find, pos);
		}
		Outfile << str << std::endl;
	}
	Outfile.close();
}

int	main(int argc, char **argv)
{
	std::fstream	Infile;
	
	std::string		Name;
	std::string		Find;
	std::string		Replace;

	if (argc == 4)
	{
		Name = argv[1];
		Find = argv[2];
		Replace = argv[3];
		
		Infile.open(Name);
		if (!Infile.is_open())
		{
			std::cout << "error, wrong open" << std::endl;
			return (0);
		}
		if (Find.empty() || Replace.empty())
		{
			std::cout << "error, miss arg" << std::endl;
			return (0);
		}
		CpyString(Name, &Infile, Find, Replace);
		Infile.close();
	}
	return (0);
}
