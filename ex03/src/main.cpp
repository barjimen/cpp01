/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:48:52 by barjimen          #+#    #+#             */
/*   Updated: 2025/08/07 21:13:25 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/HumanA.hpp"
# include "../inc/HumanB.hpp"
int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack(); //uses original weapon type
        club.setType("some other type of club");
        bob.attack(); //now the type is updated
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
return 0;
}

//Why should you use a pointer to a weapon and when a refence?
//Well in the first scope weapon is passed by the constructor
//Weapon MUST exist when HumanA is created. Since references cannot 
//be null and must be initialized immediately.
//Its perfect when the weapon is guaranteed to exist
//---------------------------------------------
//In the second scope weapon is optional so the pointer can be null
//and the weapon can be set later.
//Its useful when the weapon may not be availeable immediately
