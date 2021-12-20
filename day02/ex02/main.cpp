#include "Fixed.hpp"

int main(void) {
    Fixed a;
    Fixed b(0);
    if (a == b)
        std::cout << "yes" << std::endl;
    // Fixed const b(Fixed(5.05f) * Fixed(2));
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << Fixed::max(a, b) << std::endl;
    return 0;
}