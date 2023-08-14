/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:39:32 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/14 17:00:04 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	// int	*p = new int;
	// std::string *str = new std::string;
	// *p = 1;
	// *str = "hjshg";

	// std::cout << *str << std::endl;
	
	// std::cout << *p << std::endl;
	// delete p;
	// delete str;

	int	size;
	std::cin >> size;
	std::string *x = new std::string[size];
	for (int i = 0; i < size ; i++)
		 std::cin >> x[i];
	for (int i = 0; i < size ; i++)
		 std::cout << x[i] << std::endl;
	
	delete []x;
	return 0;
}