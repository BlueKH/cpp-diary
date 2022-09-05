#include "day3실습예제1.h"
#include <iostream>

//for문을 사용해서 1~100까지 정수 중에, 짝수만 출력 -> n % 2 ==0

int main()
{
	int i;
	for (i = 1; i < 10; i++) {
		if (i % 2 == 0) {
		std::cout << "짝수 = " << i << std::endl;
		}
	}
}

/*
My Code

int main()
{
	int i;

	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			std::cout << "i가 짝수>> " << i << std::endl;
		}
		else {
			std::cout << "i가 홀수" << std::endl;
		}
	}
}
*/