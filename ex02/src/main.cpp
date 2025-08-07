/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 22:17:29 by barjimen          #+#    #+#             */
/*   Updated: 2025/08/07 21:04:45 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main ()
{
    //We declare the string, the pointer to the string and the reference
    std::string string = "HI THIS IS BRAIN";
    //The pointer stores the memory adress
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    
    //Now we print the memory adress, the adress stored in the pointer
    //and the memory address of the refence
    std::cout << &string << std::endl;
    std::cout << &stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    //And here prints the actual value of the string
    //the dereference and the value via the refence 
    std::cout << string << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    //We change the value of the string to see how it changes
    stringREF = "Hi this is barbara";
    std::cout << string << std::endl; //original variable
    std::cout << stringPTR << std::endl; // dereferenced pointer
    std::cout << stringREF << std::endl; //Reference
}