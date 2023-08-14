/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:05:31 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/14 18:37:29 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name )
{
	Zombie*	NewZombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		NewZombie[i].setName(name);
		NewZombie[i].announce();
	}

	delete [] NewZombie;
	return NewZombie;
}