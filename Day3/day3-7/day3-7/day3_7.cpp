#include "day3_7.h"
#include <iostream>

int main()
{
	int intArray[5];
	for (int i = 0; i < 5; i++) {
		std::cout << i << "번째 정수를 입력해주세요" << std::endl;
		std::cin >> intArray[i];
	}

	for (int i = 0; i < 5; i++) {
		std::cout << i << "번째 값은" << intArray[i] << std::endl;
	}
}