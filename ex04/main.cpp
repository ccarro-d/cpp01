/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 21:13:17 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/02 02:05:50 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	error_message(const std::string	&error_msg)
{
	std::cout << error_msg << std::endl;
	return (1);
}

std::string	replace_line_text(const std::string &line, const std::string &s1, const std::string &s2)
{
	std::string	result;
	size_t		pos;
	size_t		found;

	pos = 0;
	found = line.find(s1, pos);
	if (found == std::string::npos)
		return (line);
	while (found != std::string::npos)
	{
		result += line.substr(pos, found - pos) + s2;
		pos = found + s1.size();
		found = line.find(s1, pos);
	}
	result += line.substr(pos);
	return (result);
}

int	main(int argc, char **argv)
{
	std::ifstream	input;
	std::ofstream	output;
	std::string		infile;
	std::string		s1;
	std::string		s2;
	std::string		outfile;
	bool			firstLine;
	std::string		line;

	if (argc != 4)
		return (error_message("Error: Invalid number of arguments"));

	infile = argv[1];
	if (infile.empty())
		return (error_message("Error: Please select a valiid filename"));

	s1 = argv[2];
	if (s1.empty())
		return (error_message("Error: Text to find cannot be empty"));
	
	s2 = argv[3];
	
	input.open(infile.c_str()); //open necesita const *char no std::string
	if (!input.is_open())
		return (error_message("Error: Problem opening the input file"));

	outfile = infile + ".replace";
	output.open(outfile.c_str()); //open necesita const *char no std::string
	if (!output.is_open())
		return (error_message("Error: Problem creating the output file"));

	firstLine = true; // Solución para imprimir siempre salto de línea salvo al principio
	while(std::getline(input, line))
	{
		if (firstLine)
			firstLine = false;
		else
			output << "\n";
		output << replace_line_text(line, s1, s2); // Lógica de reemplazo
	}
	
	input.close();
	output.close();
	return (0);
}
