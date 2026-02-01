/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 22:04:40 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/01 13:42:19 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string	&_weapon) : type(_weapon) {}

const std::string &Weapon::getType(void)	const
{
	return (type);
}

void	Weapon::setType(const std::string	_type)
{
	type = _type;
}

