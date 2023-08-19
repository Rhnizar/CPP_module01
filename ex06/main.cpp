/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:18:23 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/19 12:15:56 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl    harl;
    	harl.complain(argv[1]);
	}
	else
		std::cerr << "Usage: " << argv[0] << " <level> " << std::endl;
	return 0;
}
