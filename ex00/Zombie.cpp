/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:57:16 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/14 16:30:14 by rrhnizar         ###   ########.fr       */
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
