#include "day1_4.h"
#include <iostream>


/*if문
result = inpA + inpB;
std::cout << "답은 ~ : " << result << std::endl;

//그 합이, 짝수 일때, '짝수'를 출력
//if() -> 만약에(조건)
//그 합이, 홀수 일때, '홀수'를 출력

if (result % 2 == 0)
{
	//if문의 조건이 부합하면, 실행되는 곳.
	//짝수를 출력.
	std::cout << "짝수" << std::endl;
}

if (result % 2 != 0)
{
	//if문의 조건이 부합하면, 실행되는 곳.
	//홀수를 출력.
	std::cout << "홀수" << std::endl;
}*/


int main()
{
	int k, l;
	int result;

	std::cout << "정수 두 개 입력하시오>> " << std::endl;
	std::cin >> k >> l;
	result = k + l;

	if (result % 2 == 0) {
		//짝수
		std::cout << "짝수" << std::endl;
	}
	else if (result % 2 != 0) {
		//홀수
		std::cout << "짝수" << std::endl;
	}

	std::cout << std::endl;  //줄띄움

	int m;
	std::cout << "숫자 입력>> " << std::endl;
	std::cin >> m;

	if (m > 1) {
		result = m + 1;
		std::cout << "answer: " << result << std::endl;
	}
	else if (m < 1) {
		result = m - 1;
		std::cout << "answer: " << result << std::endl;
	}
	else {
		result = m / 1;
		std::cout << "answer: " << result << std::endl;
	}
	
}