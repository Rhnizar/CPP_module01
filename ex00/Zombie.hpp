/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:55:39 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/19 11:00:29 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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

void 		randomChump( std::string name );
Zombie* 	newZombie( std::string name );

#endif