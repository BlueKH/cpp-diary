#include "day2_1.h"
#include <iostream>

//함수
int AddSum1(int x1, int x2)
{
	int result;

	result = x1 + x2;  //합
	std::cout << "두 개의 합은 " << result << std::endl;

	return result;  //반환, 결과값을 반환한다(돌려준다).
}

//두 개의 정수 합을 반환하는 함수
int AddSum(int a, int b)
{
	std::cout << "덧셈 함수 진행" << std::endl;
	int result;
	result = a + b;
	return result;
}

//두 개의 정수 뺄셈 반환하는 함수
int Substract(int a, int b)
{
	std::cout << "뺼셈 함수 진행" << std::endl;
	int result;
	result = a - b;
	return result;
}

//두 개의 정수 곱을 반환하는 함수
int Multiply(int a, int b)
{
	std::cout << "곱셈 함수 진행" << std::endl;
	int result;
	result = a * b;
	return result;
}

//두 개의 정수 나눗셈을 반환하는 함수
int Divide(int a, int b)
{
	std::cout << "나눗셈 함수 진행" << std::endl;
	int result;
	result = a / b;
	return result;
}

int main()
{
	//입력 받고 출력을 하는 기능, 도구 tool
	//함수(function), method(방법)
	/*
	int inputA;
	std::cin >> inputA;
	std::cout << "inputA 는 : " << inputA << std::endl;
	*/

	int inputA;
	int inputB;

	std::cout << "첫번째 숫자 입력" << std::endl;
	std::cin >> inputA;
	std::cout << "두번째 숫자 입력" << std::endl;
	std::cin >> inputB;

	AddSum1(inputA, inputB);

	int choose;
	std::cout << "1번 덧셈, 2번 뺄셈, 3번 곱셈, 4번 나눗셈" << std::endl;
	std::cin >> choose;

	if (choose == 1) {
		int result;
		result = AddSum(inputA, inputB);
		std::cout << "덧셈 결과는>> " << result << std::endl;
	}
	else if (choose == 2) {
		int result;
		result = Substract(inputA, inputB);
		std::cout << "뺄셈 결과는>> " << result << std::endl;
	}
	else if (choose == 3) {
		int result;
		result = Multiply(inputA, inputB);
		std::cout << "곱셈 결과는>> " << result << std::endl;
	}
	else if (choose == 4) {
		int result;
		result = Divide(inputA, inputB);
		std::cout << "나눗셈 결과는>> " << result << std::endl;
	}

	//구현할 데이터가 어떤 데이터 타입으로 선언 -> 개발자가 선정을 잘해야함
	//성능차이
}
