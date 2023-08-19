/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:46:24 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/19 11:04:12 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*zombie = newZombie("rida");
	zombie->announce();
	randomChump("rr");
	delete zombie;
	return 0;
}
