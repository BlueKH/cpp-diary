#include "day3_6.h"
#include <iostream>

int main()
{
	int intArray[10] = { 22, 19, -5, 25, -28 };

	int arraySum = 0;

	std::cout << "for�� �� arraySum ����" << arraySum << std::endl;
	for (int i = 0; i < 5; i++) {
		arraySum += intArray[i];
		std::cout << "for�� �� arraySum ����" << arraySum << std::endl;
	}
	std::cout << "for�� �� arraySum ����" << arraySum << std::endl;
}