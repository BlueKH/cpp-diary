#include "day1REtraining.h"
#include <iostream>

//실습예제
//숫자를 5개 입력을 받고, 1번, 2번~5번
//1번과 3번의 합
//2번과 4번의 뺄셈
//3번과 5번의 곱
//1번과 5번의 나눗셈
//출력하기.

int main()
{
	int inputA;
	int inputB;
	int inputC;
	int inputD;
	int inputE;

	std::cout << "첫 번째 숫자 입력" << std::endl;
	std::cin >> inputA;
	std::cout << "두 번째 숫자 입력" << std::endl;
	std::cin >> inputB;
	std::cout << "세 번째 숫자 입력" << std::endl;
	std::cin >> inputC;
	std::cout << "네 번째 숫자 입력" << std::endl;
	std::cin >> inputD;
	std::cout << "다섯 번째 숫자 입력" << std::endl;
	std::cin >> inputE;

	std::cout << "입력 받은 수 다섯 개는" << inputA << inputB << inputC << inputD << inputE << std::endl;

	int resultSum = inputA + inputC;
	std::cout << "1번과 3번의 합" << resultSum << std::endl;

	int resultSub = inputB - inputD;
	std::cout << "2번과 4번의 차" << resultSub << std::endl;

	int resultMulti = inputC * inputE;
	std::cout << "3번과	5번의 곱" << resultMulti << std::endl;

	int resultDiv = inputA / inputE;
	std::cout << "1번과 5번의 나눗셈" << resultDiv << std::endl;
}

/*
My Code

int main()
{
	int a, b, c, d, e;
	cout << "정수 다섯 개를 입력하라>> " << endl;
	cin >> a >> b >> c >> d >> e;

	cout << "정수 a와 c의 합>> " << sum(a, c) << endl;
	cout << "정수 b와 d의 뺼셈>> " << substract(b, d) << endl;
	cout << "정수 c와 e의 곱>> " << multiple(c, e) << endl;
	cout << "정수 a와 e의 나눗셈>> " << divide(a, e) << endl;

	return 0;
}

int sum(int x, int y) {
	int sum;
	sum = x + y;

	return sum;
}

int substract(int x, int y) {
	int sub;
	sub = x - y;

	return sub;
}

int multiple(int x, int y) {
	int mul;
	mul = x * y;

	return mul;
}


int divide(int x, int y) {
	int div;
	div = x / y;

	return div;
}
*/