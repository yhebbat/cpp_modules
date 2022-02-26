#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main()
{
    std::stack<int> table;
    std::list<int> tab;
    table.push(3);
    table.push(4);
    table.push(5);
    table.push(6);
    table.push(7);
    table.push(8);
    tab.push_back(3);
    tab.push_back(4);
    tab.push_back(5);
    tab.push_back(6);
    tab.push_back(7);
    tab.push_back(8);
    try
    {
        easyfind(table, 322);
        easyfind(table, 6);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(tab, 3);
        easyfind(tab, 6);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}