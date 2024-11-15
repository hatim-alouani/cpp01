#include "Zombie.hpp"

int main(){
    randomChump("Zombie2");
    Zombie *zombie1 = newZombie("Zombie1");
    if (!zombie1)
    {
        std::cout << "Allocation failed" << std::endl;
        exit(0);
    }
    zombie1->announce();
    delete zombie1;
}