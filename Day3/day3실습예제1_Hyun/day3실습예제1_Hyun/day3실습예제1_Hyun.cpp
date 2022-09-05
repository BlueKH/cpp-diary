#include "day3실습예제1_Hyun.h"
#include <iostream>

int main()
{
	int i;
	for (i = 1; i < 100; i++) {
		if (i % 2 == 0) {
			std::cout << "i가 짝수>> " << i << std::endl;
		}
		else {
			std::cout << "i값은 홀수이다." << std::endl;
		}
	}
}