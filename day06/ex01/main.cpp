#include <iostream>

typedef struct Data
{
    int ll;
    float r;
}Data;

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);    
}

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

int main()
{
    Data d;

    d.ll = 20;
    d.r = 20.33;
    uintptr_t x = serialize(&d);
    std::cout << x << std::endl;
    Data * ds = deserialize(x);
    std::cout << ds->ll << std::endl;
    std::cout << ds->r << std::endl;

    return (0);
}
