/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:13:07 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/19 11:44:38 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string namee)
{
	name = namee;
}

Weapon *HumanB::getWeapon()
{
	return WeaponHumanB;
}

void	HumanB::setWeapon(Weapon& WeaponHumanBb)
{
	WeaponHumanB = &WeaponHumanBb;
}

std::string	HumanB::getName()
{
	return name;
}

void	HumanB::setName(std::string n)
{
	name = n;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << WeaponHumanB->getType() << std::endl;
}
