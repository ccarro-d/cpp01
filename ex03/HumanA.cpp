/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 00:00:13 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/01 00:16:44 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA (const std::string _name, const Weapon _weapon) : name(_name), weapon(_weapon) {}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their weapon " << weapon.getType() << std::endl;
}