#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) ,weapon(NULL){
    return ;
}

HumanB::~HumanB(void){
    return ;
}

void HumanB::attack(void){
    if (!weapon)
        std::cout << name << " attacks without weapon " << std::endl;
    else
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    return ;
}

void HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
    return ;
}