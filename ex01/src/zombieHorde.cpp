/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 22:05:07 by barjimen          #+#    #+#             */
/*   Updated: 2025/08/07 20:23:25 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    //We create the array 
    Zombie* zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        //Set the zombie name
        zombies[i].setName(name);
        //The zombie announces itself
        zombies[i].announce();
    }
    return (zombies);
}