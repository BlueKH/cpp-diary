#include "day3_7.h"
#include <iostream>

int main()
{
	int intArray[5];
	for (int i = 0; i < 5; i++) {
		std::cout << i << "��° ������ �Է����ּ���" << std::endl;
		std::cin >> intArray[i];
	}

	for (int i = 0; i < 5; i++) {
		std::cout << i << "��° ����" << intArray[i] << std::endl;
	}
}