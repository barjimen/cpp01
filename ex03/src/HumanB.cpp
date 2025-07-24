/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:49:32 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/24 23:02:22 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    std::cout << "HumanB constructor called" << std::endl;
    //_name = name; Es lo mismo
}

// HumanB::HumanB(std::string name, Weapon weapon)
// {
//     _name = name;
//     _weapon = weapon;
// }

HumanB::~HumanB()
{
    std::cout << "HumanB destructor called" << std::endl;
}

void HumanB::attack()
{
    std::cout << _name << "attacks with their" << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}