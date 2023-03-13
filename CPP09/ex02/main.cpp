#include "PmergeMe.hpp"

int     main( int ac, char **av )
{
    if (ac != 2)
    {
        std::cout << "Usage: ./ex02 \"expression\"" << std::endl;
        return 1;
    }
    std::string expression(av[1]);
    
    return 0;
}