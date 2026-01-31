/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:31:54 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/01/31 21:16:47 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int			N;
	std::string	name;
	Zombie		*zombies;
	int i;

	N = 5;
	name = "Jacinto";
	zombies = zombieHorde(N, name);
	i = 0;
	while (i < N)
	{
		zombies[i].announce();
		i++;
	}
	delete[] zombies;
	return (0);
}