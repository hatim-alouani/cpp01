#include "Zombie.hpp"

int main(){
    Zombie *zombie1 = newZombie("Zombie1");
    if (!zombie1)
    {
        std::cout << "Allocation failed" << std::endl;
        exit(0);
    }
    zombie1->announce();
    randomChump("Zombie2");
    delete zombie1;
    return 0;
}