/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:05:11 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/14 17:07:06 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie* NewZombie = new Zombie;
	NewZombie->setName(name);
	return NewZombie;
}

Zombie::Zombie()
{
	name = "test";
}

Zombie::~Zombie()
{
	std::cout << name << " zombie destroyed !" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ":" << " BraiiiiiiinnnzzzZ..." <<std::endl;
}
