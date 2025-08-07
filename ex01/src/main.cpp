/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 22:11:13 by barjimen          #+#    #+#             */
/*   Updated: 2025/08/07 20:26:12 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main()
{
    //We declare the pointer to the array
    Zombie* zombies;
    {
        std::cout << "Scope 1: " << std::endl;
        //they array will have 5 zombies named "Patata" on the heap
        //that means that when we en the cope the array persist
        zombies = zombieHorde(5,"Patata");
    }
    
    std::cout << "Exit Scope 1: " << std::endl;
    //That means that we have to delete manually
    delete[](zombies);
    return (0);    
}
