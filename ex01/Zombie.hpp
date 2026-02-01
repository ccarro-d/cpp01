/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 20:30:34 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/01 13:47:51 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
	
	public:
		Zombie();
		Zombie(std::string);
		~Zombie();
		void	announce(void)	const;
		void	setName(const std::string &_name);
	
	private:
		std::string	name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif