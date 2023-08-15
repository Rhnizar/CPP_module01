/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:01:12 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/15 10:39:14 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON
#define	WEAPON

#include <iostream>

class Weapon
{
private:
	std::string	type;
public:

	Weapon(std::string	typee);
	// Weapon();
	std::string	getType();
	void		setType(std::string t);
};



#endif