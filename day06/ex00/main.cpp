#include <math.h>
#include <iostream>
#include <cmath>
#include <limits>
#include <string>

void    float_to_char(float &f)
{
	std::cout << "char: ";
	if (f < std::numeric_limits<char>::min() || f > std::numeric_limits<char>::max() || isnan(f))
		std::cout <<  "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(f);
		if (isprint(c))
			std::cout << c << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
}

void    float_to_int(float &f)
{
    std::cout << "int: ";
	if (isnan(f) || f < std::numeric_limits<int>::min() || f > 2147483648 /*std::numeric_limits<int>::max()*/)
		std::cout <<  "impossible" << std::endl;
	else
	{
		int i = static_cast<int>(f);
		std::cout << i << std::endl;
	}
}

void    printf_float(float &f)
{
    std::cout << "float: ";
	std::cout << f;
	if (floorf(f) == ceilf(f))
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void    float_to_double(float &f)
{
    std::cout << "double: ";
	if (f < std::numeric_limits<double>::min() || f > std::numeric_limits<double>::max() || isnan(f))
		std::cout <<  "impossible" << std::endl;
	else
	{
		double i = static_cast<double>(f);
		std::cout << i;
		if (floorf(i) == ceilf(i))
			std::cout << ".0";
		std::cout << std::endl;
	}
}

void    double_to_char(double &f)
{
    std::cout << "char: ";
	if (f < std::numeric_limits<char>::min() || f > std::numeric_limits<char>::max() || isnan(f))
		std::cout <<  "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(f);
		if (isprint(c))
			std::cout << c << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
}

void    double_to_int(double &f)
{
    std::cout << "int: ";
	if (f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max() || isnan(f))
		std::cout <<  "impossible" << std::endl;
	else
	{
		int i = static_cast<int>(f);
		std::cout << i << std::endl;
	}
}

void    print_double(double &f)
{
    std::cout << "double: ";
	std::cout << f;
	if (floorf(f) == ceilf(f))
		std::cout << ".0";
	std::cout << std::endl;
}

void	double_to_float(double &f)
{
    std::cout << "float: ";
	if (f < (std::numeric_limits<float>::max() * -1) || f > std::numeric_limits<float>::max())
		std::cout <<  "impossible" << std::endl;
	else
	{
		float i = static_cast<float>(f);
		std::cout << i;
		if (floorf(i) == ceilf(i))
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

void    int_to_char(int &f)
{
    std::cout << "char: ";
	if (f < std::numeric_limits<char>::min() || f > std::numeric_limits<char>::max() || isnan(f))
		std::cout <<  "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(f);
		if (isprint(c))
			std::cout << c << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
}

void    print_int(int &f)
{
    std::cout << "int: " << f << std::endl;
}

void    int_to_double(int &f)
{
    std::cout << "double: ";
	if (f < (std::numeric_limits<double>::max() * -1) || f > std::numeric_limits<double>::max() || isnan(f))
		std::cout <<  "impossible" << std::endl;
	else
	{
		double i = static_cast<double>(f);
		std::cout << i;
		std::cout << ".0" << std::endl;
	}
}

void	int_to_float(int &f)
{
    std::cout << "float: ";
	if (f < (std::numeric_limits<float>::max() * -1) || f > std::numeric_limits<float>::max() || isnan(f))
		std::cout <<  "impossible" << std::endl;
	else
	{
		float i = static_cast<float>(f);
		std::cout << i;
		std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "you have to write one argument" << std::endl;
        return (1);
    }
    std::string s = std::string(av[1]);
    if (s.find_last_of('f') != std::string::npos && s.find('.') != std::string::npos)
    {
        float f;
        try
        {
            // f = ::atof(s.c_str());
			f = std::stof(s);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            return (0);
        }
        float_to_char(f);
        float_to_int(f);
        printf_float(f);
        float_to_double(f);
    }
	else if (s.find('.') != std::string::npos || !s.compare("nan") || !s.compare("+inf") || !s.compare("-inf"))
	{
		double d;
		try
		{
			// d = ::atof(s.c_str());
			d = std::stod(s);
		}
		catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            return (0);
        }
		double_to_char(d);
        double_to_int(d);
        double_to_float(d);
        print_double(d);
	}
	else
	{
		int i;
		try
		{
			i = std::stoi(s);
		}
		catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            return (0);
        }
		int_to_char(i);
        print_int(i);
        int_to_float(i);
        int_to_double(i);
	}
    return(0);
}