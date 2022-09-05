#include "day2test1.h"
#include <iostream>

//실습
//number 1 ~ 3
//각각 세번 입력받고, 입력받은 값으로 변환하기
//출력
//조건
//입력받는 함수(함수 1개만 만들기)
//출력받는 함수(함수 1개만 만들기)

int number1;
int number2;
int number3;

//입력받는 함수
void Inputer()
{
	//각각 세번 입력받음
	std::cout << "입력 1" << std::endl;
	std::cin >> number1;
	std::cout << "입력 2" << std::endl;
	std::cin >> number2;
	std::cout << "입력 3" << std::endl;
	std::cin >> number3;
}

void Printer()
{
	//출력하기
	std::cout << "number 1의 값은" << number1 << std::endl;
	std::cout << "number 2의 값은" << number2 << std::endl;
	std::cout << "number 3의 값은" << number3 << std::endl;
}

int main()
{
	number1 = 1;
	number2 = 2;
	number3 = 3;

	Inputer();
	Printer();
	Inputer();
	Printer();
	Inputer();
	Printer();
}