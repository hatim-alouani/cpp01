#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type){
    this->type = type;
    return ;
}

Weapon::~Weapon(){
    return ;
}

void Weapon::setType(std::string type){
    this->type = type;
    return ;
}

std::string Weapon::getType(void) const{
    return type;
}