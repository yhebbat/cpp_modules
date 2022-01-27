#include "iter.hpp"

void    lower(char k)
{
    if (k > 64 && k < 91)
        std::cout << (char)(k + 32);
    else
        std::cout << (char)(k);
}

void factorial(int i)
{
    int c, f = 1;
    for (c = 1; c <= i; c++)
        f = f * c;
    std::cout << "factoriel de "<< i << " est: "<< f << std::endl;

}

int main()
{
    char    str[22] = "YASSINE";
    int     arr[6] = {0, 1, 2, 3, 4, 5};

    iter(str, 22, lower);
    std::cout << std::endl;
    iter(arr, 6, factorial);
    return 0;
}