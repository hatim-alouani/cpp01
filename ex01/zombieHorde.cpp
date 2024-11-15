#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    if (N < 0)
    {
        std::cout << "Error N should be >= 0" << std::endl;
        exit(0);
    }
    Zombie *zombies= new Zombie[N];
    if (!zombies)
    {
        std::cout << "allocation failed" << std::endl;
        exit(0);
    }
    for (int i = 0; i < N ; i++){
        zombies[i].setName(name);
    }
    return zombies;
}