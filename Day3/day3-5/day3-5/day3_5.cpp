#include "day3_5.h"
#include <iostream>

//¹è¿­ [], Array
int main()
{
	char name[4] = { 'H', 'Y', 'U', 'N' };

	char b = 'A';

	std::cout << name[0] << std::endl;
	std::cout << name[1] << std::endl;
	std::cout << name[2] << std::endl;
	std::cout << name[3] << std::endl;

	for (int i = 0; i < 4; i++) {
		std::cout << name[i] << " ";
	}
}