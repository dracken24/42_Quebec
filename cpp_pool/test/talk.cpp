/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   talk.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:19:16 by nadesjar          #+#    #+#             */
/*   Updated: 2022/08/23 13:14:40 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>

int main(void)
{
    std::string str;
    std::string age;
    
    std::cout << "Bonjour a toi, humain" << std::endl;
    std::cout << "Je m'appelle " ;
    usleep(2000000);    
    std::cout << "...." << std::endl;
    usleep(1500000);
    std::cout << "J'ai oubliée mon nom ... toi, quel est ton nom??" << std::endl;
    std::cin >> str;
    std::cout << "Bonjour " << str << " !" << std::endl;
    usleep(1500000);
    std::cout <<  "Et quel age as-tu?" << std::endl;
    std::cin >> age;
    std::cout << "D'accord, tu as " << age << " ans !" << std::endl;
    usleep(1500000);
    std::cout << "Bonne journée à toi " << str << std::endl;
    usleep(1500000);
    return (0);
}