#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> table;
    table.push_back(3);
    table.push_back(4);
    table.push_back(5);
    table.push_back(6);
    table.push_back(7);
    table.push_back(8);
    try
    {
        easyfind(table, 3);
        easyfind(table, 22);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }   
}