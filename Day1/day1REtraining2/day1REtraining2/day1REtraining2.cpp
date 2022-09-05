#include "day1REtraining2.h"
#include <iostream>


//if문, if -> 만약에
//if(), 만약에(~하면)
//2개의 정수를 입력받고
//사칙연산 중 하나를 번호로 선택 후
//해당 사칙연산의 값을 출력

int main()
{
	int inputA;
	int inputB;

	std::cout << "정수를 두 개 입력해주세요" << std::endl;
	std::cin >> inputA >> inputB;

	int choose;

	std::cout << "원하시는 연산을 고르세요" << std::endl;
	std::cout << "1.덧셈, 2.뺄셈, 3.곱셈, 4.나눗셈" << std::endl;
	std::cin >> choose;

	if (choose == 1) {  // =(대입), ==(같다, 등호)
		//choose가 1이면 여기가 진행.
		//덧셈 진행.
		int resultSum = inputA + inputB;
		std::cout << "두 수의 합 " << resultSum << std::endl;
	}
	else if (choose == 2) {
		int resultSub = inputA - inputB;
		std::cout << "두 수의 차 " << resultSub << std::endl;
	}
	else if (choose == 3) {
		int resultMulti = inputA * inputB;
		std::cout << "두 수의 곱 " << resultMulti << std::endl;
	}
	else if (choose == 4) {
		int resultDiv = inputA / inputB;
		std::cout << "두 수의 나눗셈 " << resultDiv << std::endl;
	}
	else {  //그 외
		std::cout << "1번 ~ 4번 중에 골라주세요" << std::endl;
	}

}