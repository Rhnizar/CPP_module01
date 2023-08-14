/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:57:16 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/14 19:58:40 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


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

void	Zombie::setName(std::string n)
{
	name = n;
}

std::string	Zombie::getName()
{
	return name;
}