/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:42:38 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/18 17:30:01 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::ifstream	inputFile;//Declare a file stream object:
		std::ofstream	outputFile;//Declare output file:
		std::string		s0 = argv[1];
		std::string		s1 = argv[2];
		std::string		s2 = argv[3];
		std::string		ouputFileName = s0.append(".replace");

		inputFile.open(argv[1]);//Open the file:
		if (!inputFile.is_open())//Check if the file was successfully opened:
		{
			std::cerr << "Error opening input file." << std::endl;
			return 1;
		}
		outputFile.open(ouputFileName);
		if (!outputFile.is_open())
		{
			std::cerr << "Error opening output file." << std::endl;
			inputFile.close();
			return 1;
		}
		std::string line;
		while (std::getline(inputFile, line))
		{
			size_t found = line.find(s1);
			while (found != std::string::npos) 
			{
        		line.replace(found, s1.length(), s2);
        		found = line.find(s1, found + s2.length());
    		}
			outputFile << line << std::endl;
		}
		inputFile.close();
		outputFile.close();
	}
	else
    {
        std::cerr << "Usage: " << argv[0] << " <input_file> <search_string> <replace_string>" << std::endl;
        return 1;
    }
	return 0;
}
