#include "day3_4.h"
#include <iostream>

int main()
{
	//2중 for문
	for (int i = 0; i < 10; i++) {
		std::cout << "첫번째 for문 i : " << i << std::endl;
		for (int j = 0; j < 10; j++) {
			std::cout << "두번째 for문 j : " << j << std::endl;
		}
	}
}