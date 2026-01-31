/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 21:55:34 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/01 00:27:50 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon{
	public:
		Weapon(const	std::string	_weapon);
		~Weapon();
		std::string	getType(void) const;
		void		setType(const std::string	_type);

	private:
		std::string type;
};

#endif
