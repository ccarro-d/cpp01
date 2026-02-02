/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 20:40:51 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/02 21:24:26 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	h;

	std::cout << "Testing DEBUG level:" << std::endl;
	h.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "Testing INFO level:" << std::endl;
	h.complain("INFO");
	std::cout << std::endl;

	std::cout << "Testing WARNING level:" << std::endl;
	h.complain("WARNING");
	std::cout << std::endl;
	
	std::cout << "Testing ERROR level:" << std::endl;
	h.complain("ERROR");

	return (0);
}