/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:06:49 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/14 20:48:29 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA
#define	HUMANA

#include <iostream>
#include "Weapon.hpp"

class HumanA{
	private:
		std::string	name;
		Weapon	WeaponHumanA;
	public:
		HumanA(std::string namee, Weapon WeaponHumanAa);
		std::string getName();
		void		setName(std::string n);
		void	attack();
};

#endif