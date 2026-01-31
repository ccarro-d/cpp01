/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:31:54 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/01/31 21:37:33 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of the string variable " << &str << std::endl;
	std::cout << "Memory address held by stringPTR " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF " << &stringREF << std::endl;
	
	std::cout << "Value of the string variable " << str << std::endl;
	std::cout << "Value pointed to by stringPTR " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF " << stringREF << std::endl;
	return (0);
}