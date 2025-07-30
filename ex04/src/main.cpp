/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:35:32 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/30 19:14:18 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::ofstream outfile;
        std::ifstream infile(argv[1]);
        std::string filename(argv[1]);
        std::string text;
        int i = 0;
        
        if (!infile.is_open())
        {
            std::cout << "Can't open :(" << std::endl;
            return (1);
        }
        filename += ".replace";
        //c_str es para que lo entienda como un char*, te devuelve esa version
        outfile.open(filename.c_str());
        if (!outfile.is_open())
        {
            outfile.close();
            std::cout << "Can't open :(" << std::endl;
            return (1);
        }
        
        while (std::getline(infile, text))
        {
            while (text.find(argv[2]) != std::string::npos)
            {
                i = text.find(argv[2]);
                text.erase(i, std::string(argv[2]).length());
                text.insert(i, argv[3]);
            }
            outfile << text << std::endl;
        }
        infile.close();
        outfile.close();
    }
    else
    {
        std::cout << "Must be 3 arguments!" << std::endl;
    }
}