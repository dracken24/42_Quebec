/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:54:14 by dracken24         #+#    #+#             */
/*   Updated: 2022/12/30 16:31:01 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain const &copy);
		virtual ~Brain();
		
		Brain &operator=(Brain const& copy);
		
		void 		setIdea(int nbr, std::string idea);

		void	printIdeas(void) const;
		
		std::string getIdea(int nbr) const;

	private:
		std::string _ideas[100];
};

#endif
