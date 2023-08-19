/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:09:59 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/19 11:46:31 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}
Weapon::Weapon(std::string typee)
{
	type = typee;
}
void	Weapon::setType(std::string t)
{
	type = t;
}

std::string	Weapon::getType()
{
	return type;
}
