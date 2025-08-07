/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:35:32 by barjimen          #+#    #+#             */
/*   Updated: 2025/08/07 21:20:44 by barjimen         ###   ########.fr       */
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
        
        //we check if the file can be opened
        if (!infile.is_open())
        {
            std::cout << "Can't open :(" << std::endl;
            return (1);
        }
        // Constructor output filename
        filename += ".replace";
        
        //We open it
        //c_str() returns a const char* version of the std::string, which is what .open() expects
        //so he can understd it
        outfile.open(filename.c_str());
        if (!outfile.is_open())
        {
            outfile.close();
            std::cout << "Can't open :(" << std::endl;
            return (1);
        }
        
        //Read input file line by line
        while (std::getline(infile, text))
        {
            //Find and replace manually
            while (text.find(argv[2]) != std::string::npos)
            {
                i = text.find(argv[2]);
                text.erase(i, std::string(argv[2]).length());
                text.insert(i, argv[3]);
            }
            //Wrrite modified line to output file
            outfile << text << std::endl;
        }
        //Close files
        infile.close();
        outfile.close();
    }
    else
    {
        std::cout << "Must be 3 arguments!" << std::endl;
    }
}