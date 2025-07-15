/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 22:17:29 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/15 22:32:19 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main ()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    
    std::cout << &string << std::endl;
    std::cout << &stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    
    std::cout << string << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    //Asi podemos ver como cambia la referencia
    stringREF = "Hi this is barbara";
    std::cout << string << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}