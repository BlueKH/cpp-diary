#include "day2_2.h"
#include <iostream>

//  ***함수랑 변수 ***
//변수 -> 전역 변수 와 지역 변수
//나만의 함수를 만들고 싶을 때, void 사용.

//전역 변수, 입력 받을 정수
int inputA;
int inputB;

int choose;  //연산 종류 고르는 숫자

//입력받기 함수
//void -> 빈(비어있는), 아직 정의하지 않은, 메서드, 도구
void InputPhase()
{
	std::cout << "첫번째 inputA 입력 해주세요" << std::endl;
	std::cin >> inputA;

	std::cout << "두번째 inputB 입력 해주세요" << std::endl;
	std::cin >> inputB;
}

//시작 문구
void StartText()
{
	std::cout << "함수 호출 전" << std::endl;
	std::cout << "inputA 의 값은 " << inputA << std::endl;
	std::cout << "inputB 의 값은 " << inputB << std::endl;
}

//입력 후 값 출력 함수
void AfterInput()
{
	std::cout << "입력받은 후 inputA 값은" << inputA << std::endl;
	std::cout << "입력받은 후 inputB 값은" << inputB << std::endl;
}

//연산 고르기
void ChooseCalculate()
{
	std::cout << "1번 덧셈, 2번 뺄셈, 3번 곱셈, 4번 나눗셈" << std::endl;
	std::cin >> choose;
}

int Add(int a, int b)
{
	int result;
	result = a + b;
	return result;
}

int Substract(int a, int b)
{
	int result = a - b;
	return result;
}

int Multiply(int a, int b)
{
	int result;
	result = a * b;
	return result;
}

int Divide(int a, int b)
{
	int result;
	result = a / b;
	return result;
}

int main()
{
	StartText();
	InputPhase();
	AfterInput();
	ChooseCalculate();

	if (choose == 1) {
		//덧셈 실행
		Add(inputA, inputB);
	}
	else if (choose == 2) {
		if (inputA > inputB) {
			Substract(inputA, inputB);
		}
		else if (inputA < inputB) {
			Substract(inputB, inputA);
		}
		else {
			std::cout << "나머지는 0 이다." << std::endl;
		}
	}

	else if (choose == 3) {
		Multiply(inputA, inputB);
	}
	else if (choose == 4) {
		Divide(inputA, inputB);
	}
	else {
		std::cout << "1 ~ 4가 아닌 다른걸 누름." << std::endl;
	}
}