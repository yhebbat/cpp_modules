#include <iostream>
#include <vector>

template <typename T>
void easyfind(T tab, int k)
{
    if (std::find(tab.begin(), tab.end(), k) == k)
        std::cout << "i found it" << std::endl;
    else
    {
        throw "element not found";
    }
}