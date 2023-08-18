/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:05:02 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/18 10:22:05 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
#define ZOMBIE

#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void		announce( void );
	void		setName(std::string n);
	std::string	getName();
};

Zombie*	zombieHorde( int N, std::string name );
Zombie*	newZombie( std::string name );

#endif
