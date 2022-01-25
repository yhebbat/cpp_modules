#include<iostream>

int main()
{
	float i = 42.33;
	void *r = &i;
	int *k = reinterpret_cast<int*>(r);

	std::cout << *k << "\n";
}