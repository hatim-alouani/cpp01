#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
}

void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ){
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    for (i = 0; i < 4; i++){
        if (level == levels[i]){
            break ;
        }
    }
    switch (i)
    {
        case 0:
            std::cout << "[DEBUG]"<< std::endl;
            Harl::debug();
        case 1:
            std::cout << "[INFO] "<< std::endl;
            Harl::info();
        case 2:
            std::cout << "[WARNING] "<< std::endl;
            Harl::warning();
        case 3:
            std::cout << "[ERROR]" << std::endl;
            Harl::error();
            break;
        default:
            std::cout << "No valid level" << std::endl;
    }
}