/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:50:14 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/24 22:59:47 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "../inc/Weapon.hpp"

class HumanA
{
private:
    Weapon &_weapon;
    std::string _name;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();
};
