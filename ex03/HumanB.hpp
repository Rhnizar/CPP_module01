/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:09:16 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/14 20:14:08 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB
#define	HUMANB

#include <iostream>
#include "Weapon.hpp"

class HumanB{
	private:
		std::string	name;
	public:
		std::string getName();
		void		setName(std::string n);
		Weapon	WeaponHumanB;
		void	attack();
};

#endif