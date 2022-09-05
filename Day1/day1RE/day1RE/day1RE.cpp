#include "day1RE.h"
#include <iostream>

//주석 -> 슬래쉬 + 슬래쉬, 개발자가 사용하는 메모. 특이 사항의 메모. 코드에 관여하지 않는 입력 줄.
//클래스 함수 변수
int main()
{
	// <출력하기>
	//Hello World 로 출력 받아보기
	std::cout << "Hello World" << std::endl;  //" " -> 문자(들)열. endl(end line) 줄마침.

	//F5 - 디버그 시작. ctrl+F5 - 디버그 하지 않고 시작.
	//디버그 -> Debug, 버그 잡는 것.


	// <입력하기>
	//하고 싶은 것: 정수를 두 번 입력 받고 그 합을 출력 해보자

	//정수를 두 번 입력 받고, 두개 출력하자

	//int -> integer 정수.
	int inputA;  //(데이터 타입) (이름)
	int inputB;
	//-> 선언하다

	std::cout << "정수 두 개를 입력하라>> " << std::endl;
	std::cin >> inputA >> inputB;
	std::cout << "정수 입력 A는 " << inputA << std::endl;
	std::cout << "정수 입력 B는 " << inputB << std::endl;

	//입출력, (c)in - (c)out

	//합 -> 덧셈
	std::cout << "정수 입력 A와 B의 합은 " << inputA + inputB << std::endl;

	//결과값 정수를 하나 선언
	int sumResult;
	sumResult = inputA + inputB;

	std::cout << "A와 B의 합은 " << sumResult << std::endl;  //참조 개념.

	//사칙연산 - 덧셈, 뺼셈, 곱셈, 나눗셈
	int subResult;
	subResult = inputA - inputB;

	int mulResult;
	mulResult = inputA * inputB;  // * -> 곱셈 기호

	//나눗셈은 소수(prime number)처럼 무한으로 나누어 지는 것이 존재 -> 10나누기는 곱 0.1로 표현 가능.
	int divResult;
	divResult = inputA / inputB;  // 1 나누기 3은 1/3
}