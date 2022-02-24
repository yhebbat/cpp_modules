#include <iostream>
#include <vector>
#include <stack>


class MyException : public std::exception
{
  const char * what () const throw ()
  {
    return "element not found";
  }
};

template <typename T>
void easyfind(T tab, int k)
{
    if (std::find(tab.begin(), tab.end(), k) != tab.end())
        std::cout << "i found it" << std::endl;
    else
    {
        throw MyException();
    }
}