#include <iostream>

template <typename Y>
void swap(Y &a,Y &b)
{
    Y tmp = a;
    a = b;
    b = tmp;
}

template <typename Y>
Y max(const Y &a, const Y &b)
{
    if (a > b)
        return a;
    else
        return b;
}

template <typename Y>
Y min(const Y &a, const Y &b)
{
    if (a < b)
        return a;
    else
        return b;
}