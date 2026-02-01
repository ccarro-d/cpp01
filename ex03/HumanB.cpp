/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 00:19:01 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/01 13:34:12 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB (const std::string _name) : name(_name), weapon(NULL) {}

void	HumanB::attack(void)
{
	std::cout << name;
	if (!weapon)
			std::cout << " attacks without a weapon" << std::endl;
	else
		std::cout << " attacks with their weapon " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &_weapon;
}
