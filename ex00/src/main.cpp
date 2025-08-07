/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:56:30 by barjimen          #+#    #+#             */
/*   Updated: 2025/08/07 20:16:23 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main()
{
    //We create the pointer
    Zombie* zombie;
    {
        //We create the zombie in the scope
        std::cout << "Scope 1: " << std::endl;
        //It announces itself and destroy when the function ends
        randomChump("Patata");
    }
    std::cout << "Exit Scope 1: " << std::endl;
    {
        //The second scope starts
        std::cout << "Scope 2: " << std::endl;
        //We create the zombie and returns a pointer, that means
        // that when we end the scope the zombie will persits and 
        // we have to delete it manually
        zombie = newZombie("Pepe");
    }
    std::cout << "Exit Scope 2: " << std::endl;
    //We can still use "Pepe" here
    zombie->announce();
    // We delete manually Pepe
    delete(zombie);
    return (0);
}