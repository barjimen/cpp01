/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 22:01:58 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/15 22:02:37 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Zombie
{
    private:
        std::string _name;
        
    public:
        Zombie(/* args */);
        ~Zombie();
        void announce( void ); 
        void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );