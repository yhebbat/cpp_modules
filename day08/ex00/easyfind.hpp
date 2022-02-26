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

template<typename T>
void easyfind(std::stack<T> sta, int k)
{
	std::stack<int> table;
	while (!sta.empty() && sta.top() != k)
		sta.pop();
	if (sta.size() == 0 || sta.empty())
		throw MyException();
	else
		std::cout << "i found it" << std::endl;
}

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