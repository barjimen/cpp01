/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 19:31:50 by barjimen          #+#    #+#             */
/*   Updated: 2025/08/07 21:23:01 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main()
{
    Harl Eustaquio;

    Eustaquio.complain("INFO");
    Eustaquio.complain("DEBUG");
    Eustaquio.complain("WARNING");
    Eustaquio.complain("ERROR");
    return (0);
}
