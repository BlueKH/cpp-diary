#include "day1_5.h"
#include <iostream>

//정수를 두 번(두 번 할당받을 값이 두개 필요)
//입력이 두 번
//합(정수 + 정수) = 정수, 합 할당 받을 정수(결과값) 이 필요.
//출력하기.

int main()
{
	int inpA, inpB;
	int result;
	
	std::cout << "정수를 두 개 입력하시오>> " << std::endl;
	std::cin >> inpA >> inpB;

	bool big;  //1차 입력 받은 숫자가 클 때 참. boolean(true, false)

	if (inpA > inpB) {
		result = inpA + inpB;
		std::cout << "합: " << result << std::endl;
		big = true;
	}
	else if (inpA < inpB) {
		result = inpA - inpB;
		std::cout << "차: " << result << std::endl;
		big = false;
	}
	else {
		result = inpA / inpB;
		std::cout << "나머지: " << result << std::endl;
		big = false;
	}

	if (big == true) {
		std::cout << "A가 B보다 크다" << std::endl;
		result = inpA + inpB;
		std::cout << "inpA + inpB의 값>> " << result << std::endl;
	}
	else {
		std::cout << "B가 A보다 커서 스킵" << std::endl;
	}
}