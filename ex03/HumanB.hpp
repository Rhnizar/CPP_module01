/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:09:16 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/18 15:36:50 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
#define	HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	private:
		std::string	name;
		Weapon		*WeaponHumanB;
	public:
		HumanB(std::string namee);
		Weapon		*getWeapon();
		void		setWeapon(Weapon &WeaponHumanBb);
		std::string getName();
		void		setName(std::string n);
		void		attack();
};

#endif