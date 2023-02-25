#include "Array.hpp"
#include <ctime>
#include <cstdlib>
#include <iomanip>

#define MAX 1000
int main(int, char**)
{
    Array<int> nbrs(MAX);
    int* copy = new int[MAX];
    srand(time(NULL));
    for (int i = 0; i < MAX; i++)
    {
        const int value = rand();
        nbrs[i] = value;
        copy[i] = value;
    }

    {
        Array<int> tmp = nbrs;
        Array<int> test(tmp);
    }

    std::cout << "Checking a copy between Array nbrs[] and Array copy[]" << std::endl;
    for (int i = 0; i < MAX; i++)
    {
        if (copy[i] != nbrs[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    std::cout << "Same values :D Copy OK !\n" << std::endl;


    for (int i = 0; i < MAX; i++)
    {
        nbrs[i] = rand();
    }

    for (int i = 0; i < MAX; i++)
    {
        if ( i % 2 == 0 && i <= 10 )
          std::cout << "NBRS[" << i << "] = " << nbrs[i] << std::endl;
    }

    std::cout << std::endl;
    for (int i = 0; i < MAX; i++)
    {
        nbrs[i] = 0;
        if ( i % 2 == 0 && i <= 10 )
          std::cout << "NBRS[" << i << "] = " << nbrs[i] << std::endl;
    }

    try
    {
        std::cout << "\nTrying to access nbrs[MAX]" << std::endl;
        nbrs[MAX] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "\nTrying to access nbrs[-1]" << std::endl;
        nbrs[-1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete [] copy;//
    return 0;
}