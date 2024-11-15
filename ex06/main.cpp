#include "Harl.hpp"

int main (int arc, char **arv)
{
	if (arc != 2)
	{
		std::cerr << "Usage: " << arv[0] << " <level>" << std::endl;
		exit(0);
	}
	std::string level = arv[1];
	Harl harl;
	harl.complain(level);
}