/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 22:11:13 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/15 22:13:16 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main()
{
    Zombie* zombies;
    {
        std::cout << "Scope 1: " << std::endl;
        zombies = zombieHorde(5,"Patata");
    }
    
    std::cout << "Exit Scope 1: " << std::endl;
    delete[](zombies);
    return (0);    
}
