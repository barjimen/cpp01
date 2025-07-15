/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 22:02:06 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/15 22:02:08 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie(/* args */) : _name("noName")
{
    std::cout << "Zombie " << _name <<" has been created." << std::endl;
    
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << _name <<" has been destroy." << std::endl;
    
}

void Zombie::announce( void )
{
    std::cout << _name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string name)
{
    this->_name = name;
}
