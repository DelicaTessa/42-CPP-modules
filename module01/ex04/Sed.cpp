/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 18:48:43 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:46:23 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include <fstream>
#include <iostream>

Sed::Sed() {}

int Sed::replace( std::string const &filename, char *search, char *replace)  {

    std::ifstream infile;
    std::ofstream outfile;
    std::string line;
    
    infile.open(filename, std::ios::in);
    if (!infile) {

        std::cout << "Error: couldn't open infile." << std::endl;
        return (1);
    }
    outfile.open(filename + ".replace", std::ios::trunc);
    if (!outfile) {

        infile.close();
        std::cout << "Error: couldn't open outfile." << std::endl;
        return (1);
    }
    while (std::getline(infile, line)) {

		size_t	n = strlen(search);
		size_t	pos = line.find(search);

		while (pos != std::string::npos) {

			line.erase(pos, n);
			line.insert(pos, replace);

			pos += strlen(replace);
			pos = line.find(search, pos, n);
		}

		outfile << line;
		if (!infile.eof())
			outfile << '\n';
	}
	infile.close();
	outfile.close();
    return (0);
}

Sed::~Sed() {}
