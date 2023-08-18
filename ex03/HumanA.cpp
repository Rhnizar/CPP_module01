/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:10:19 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/18 12:30:34 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string namee, Weapon& WeaponHumanAa) : WeaponHumanA(WeaponHumanAa)
{
	name = namee;
}

std::string	HumanA::getName()
{
	return name;
}

void	HumanA::setName(std::string n)
{
	name = n;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << WeaponHumanA.getType() << std::endl;
}
