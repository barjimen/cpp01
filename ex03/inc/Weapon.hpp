/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:50:12 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/24 22:55:38 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    std::string getType();
    void setType(std::string type);
};
