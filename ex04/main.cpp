/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 21:13:17 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/01 22:05:40 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	error_message(std::string	error_msg)
{
	std::cout << error_msg << std::endl;
	return (1);
}

std::string	replace_text(std::string line, std::string s1, std::string s2)
{
	std::string	result;
	int			pos;

	pos = std::find()

	return (result);
}

int	main(int argc, char **argv)
{
	std::ifstream	input;
	std::string		infile;
	std::string		s1;
	std::string		s2;
	std::ofstream	output;
	std::string		line;

	if (argc != 4)
		return (error_message("Error: Invalid number of arguments"));

	infile = argv[1];
	if (infile.empty())
		return (error_message("Error: Please select a valiid filename"));

	s1 = argv[2];
	if (s1.empty())
		return (error_message("Error: Text to find cannot be empty"));

	input.open(argv[1]);
	if (!input.is_open())
		return (error_message("Error: Problem opening the input file"));

	output.open(infile + ".replace");
	if (!output.is_open())
		return (error_message("Error: Problem creating the output file"));

	while(std::getline(input, line))
	{
		std::find()
	}
}
