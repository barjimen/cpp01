/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:49:08 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/24 22:56:51 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(/* args */) : _type("")
{
    std::cout << "Weapon constructor called" << std::endl;

}

Weapon::Weapon(std::string type): _type(type)
{
    std::cout << "Weapon constructor called" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon destructor called" << std::endl;
}

std::string Weapon::getType()
{
     return this->_type;
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}