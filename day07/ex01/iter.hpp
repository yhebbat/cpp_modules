#include <iostream>

template<typename Y>
void iter(Y *array, int size, void (*fun)(Y))
{
    for (int i = 0; i < size; i++)
        fun(array[i]);
}