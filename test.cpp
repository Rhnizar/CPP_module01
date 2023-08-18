/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:39:32 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/18 12:52:30 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon {
private:
    std::string type;

public:
    Weapon(std::string typee);
    std::string getType();
    void setType(std::string t);
};

class HumanB {
private:
    std::string name;
    Weapon WeaponHumanB;

public:
    HumanB(std::string namee);
    Weapon getWeapon();
    void setWeapon(Weapon WeaponHumanBb);
    std::string getName();
    void setName(std::string n);
    void attack();
};

// Constructor definitions for Weapon class
Weapon::Weapon(std::string typee) : type(typee) {}
std::string Weapon::getType() {
    return type;
}
void Weapon::setType(std::string t) {
    type = t;
}

// Constructor definitions for HumanB class
HumanB::HumanB(std::string namee) : name(namee), WeaponHumanB("crude spiked club") {}
Weapon HumanB::getWeapon() {
    return WeaponHumanB;
}
void HumanB::setWeapon(Weapon WeaponHumanBb) {
    WeaponHumanB = WeaponHumanBb;
}
std::string HumanB::getName() {
    return name;
}
void HumanB::setName(std::string n) {
    name = n;
}
void HumanB::attack() {
    std::cout << getName() << " attacks with " << WeaponHumanB.getType() << std::endl;
}

int main() {
    Weapon club = Weapon("crude spiked club");

    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();

    club.setType("some other type of club");
    jim.attack();

    return 0;
}

