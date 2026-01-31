/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 00:19:01 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/01 00:23:54 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB (const std::string _name) : name(_name) {}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with their weapon " << weapon.getType() << std::endl;
}

void	HumanB::setWeapon(const Weapon _weapon)
{
	weapon.setType(_weapon.getType());
}
