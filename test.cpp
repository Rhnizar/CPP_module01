/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:39:32 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/15 17:13:14 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>

// int	main()
// {
// 	// int	*p = new int;
// 	// std::string *str = new std::string;
// 	// *p = 1;
// 	// *str = "hjshg";

// 	// std::cout << *str << std::endl;
	
// 	// std::cout << *p << std::endl;
// 	// delete p;
// 	// delete str;

// 	int	size;
// 	std::cin >> size;
// 	std::string *x = new std::string[size];
// 	for (int i = 0; i < size ; i++)
// 		 std::cin >> x[i];
// 	for (int i = 0; i < size ; i++)
// 		 std::cout << x[i] << std::endl;
	
// 	delete []x;
// 	return 0;
// }


#include <iostream>
#include <string>

class Harl {
private:
    void debug();
    void info();
    void warning();
    void error();

public:
    void complain(std::string level);
};

void    Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void    Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    void (Harl::*funcptr)() = nullptr;

    if (level == "debug")
        funcptr = &Harl::debug;
    else if (level == "info")
        funcptr = &Harl::info;
    else if (level == "warning")
        funcptr = &Harl::warning;
    else if (level == "error")
        funcptr = &Harl::error;
    else
    {
        std::cout << "invalid !";
        return ;
    }
    (this->*funcptr)();
}

int main() 
{

    Harl    harl;
    harl.complain("infoo");
}
