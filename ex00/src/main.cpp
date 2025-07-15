/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:56:30 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/15 21:59:57 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main()
{
    Zombie* zombie;
    {
        std::cout << "Scope 1: " << std::endl;
        randomChump("Patata");
    }
    std::cout << "Exit Scope 1: " << std::endl;
    {
        std::cout << "Scope 2: " << std::endl;
        zombie = newZombie("Pepe");
    }
    std::cout << "Exit Scope 2: " << std::endl;
    zombie->announce();
    delete(zombie);
    return (0);
}