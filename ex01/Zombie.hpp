/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:05:02 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/14 17:11:02 by rrhnizar         ###   ########.fr       */
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
	void		setName(std::string n){name = n;}
	std::string	getName(){return name;}
};

Zombie* zombieHorde( int N, std::string name );
Zombie* 	newZombie( std::string name );

#endif
