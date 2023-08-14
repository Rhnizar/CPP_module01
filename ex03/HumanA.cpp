/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:10:19 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/14 20:50:48 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string namee, Weapon WeaponHumanAa)
{
	name = namee;
	WeaponHumanA = WeaponHumanAa;
}

std::string	HumanA::getName()
{
	return name;
}

void	HumanA::setName(std::string n)
{
	name = n;
}

// void	attack()
// {

// }