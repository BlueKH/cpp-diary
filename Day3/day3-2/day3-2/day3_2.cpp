#include "day3_2.h"
#include <iostream>

// <for문> - 반복문
//for(초기식; 조건식; 증감식) {}

int main()
{
	int i;

	for (i = 0; i < 10; i++) {
		std::cout << "i의 값은(for문 진입)" << i << std::endl;
		if (i == 2) {
			std::cout << "i 가 2일때" << std::endl;
		}
		else {
			std::cout << "i 가 2가 아닐때" << std::endl;
		}
	}
}