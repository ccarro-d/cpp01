/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 23:59:32 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/01 00:15:27 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA{
	public:
		HumanA(const std::string _name, const Weapon _weapon);
		~HumanA();
		void	attack(void);
		
	private:
		Weapon	weapon;
		std::string	name;
};


#endif