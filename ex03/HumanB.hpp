/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 00:17:11 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/01 00:21:41 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB{
	public:
		HumanB(const std::string _name);
		~HumanB();
		void	setWeapon(const Weapon _weapon);
		void	attack(void);
		
	private:
		Weapon	weapon;
		std::string	name;
};


#endif