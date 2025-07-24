/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:49:21 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/24 23:02:10 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
    std::cout << "HumanA constructor called" << std::endl;
    _name = name;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destructor called" << std::endl;
}

void HumanA::attack()
{
    std::cout << _name << "attacks with their" << _weapon.getType() << std::endl;
}