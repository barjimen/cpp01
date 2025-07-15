/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:56:37 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/15 21:05:09 by barjimen         ###   ########.fr       */
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

Zombie* newZombie( std::string name );
void randomChump( std::string name );