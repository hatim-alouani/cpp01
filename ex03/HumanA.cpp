#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){
    return ;
}

HumanA::~HumanA(void){
    return ;
}

void HumanA::attack(void){
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
    return ;
}