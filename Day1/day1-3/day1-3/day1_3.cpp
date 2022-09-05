#include "day1_3.h"
#include <iostream>

//정수 두 번 입력받고 그 합을 출력

int sum(int x, int y);

int main()
{
	int a, b;
	std::cout << "정수 두 개를 입력하시오>> " << std::endl;
	std::cin >> a >> b;

	std::cout << "두 정수의 합>> " << sum(a, b) << std::endl;
}


int sum(int x, int y) {
	int result;
	result = x + y;
	return result;
}
