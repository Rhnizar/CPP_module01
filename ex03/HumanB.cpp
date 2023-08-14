/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:13:07 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/14 20:40:40 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

std::string	HumanB::getName()
{
	return name;
}

void	HumanB::setName(std::string n)
{
	name = n;
}

// void	attack()
// {
// 	std::cout << name << 
// }