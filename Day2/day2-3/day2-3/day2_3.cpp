#include "day2_3.h"
#include <iostream>

// ***함수랑 변수***
//변수 -> 전역 변수와 지역 변수

int number1;  //전역 변수

//정수를 입력 받는 함수
void InputInt()
{
	std::cout << "정수 입력받는 함수" << std::endl;

	std::cin >> number1;
}

int main()
{
	number1 = 99;  // =(대입)
	std::cout << "number1 입력 전 값은" << number1 << std::endl;
	InputInt();
	std::cout << "number1 입력 후 값은" << number1 << std::endl;
}