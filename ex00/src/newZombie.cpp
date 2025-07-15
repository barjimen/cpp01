/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:56:32 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/15 21:31:52 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* newZombie = new(Zombie);

    newZombie->setName(name);
    newZombie->announce();

    return (newZombie);
}