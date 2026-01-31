/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:19:24 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/01/31 21:24:39 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int	i;
	Zombie	*zombies;

	i = 0;
	if (N <= i)
		return (NULL);
	zombies = new Zombie[N];
	while (i < N)
	{
		zombies[i].setName(name);
		i++;
	}
	return (zombies);
}