#include <iostream>

class test
{
private:
    /* data */
public:
    test(/* args */);
    ~test();
};

test::test(/* args */)
{
    std::cout << "hey\n";
}

test::~test()
{
    std::cout << "bye\n";
}

int main ()
{
    test* m = new test[33];
    delete [] m;
}