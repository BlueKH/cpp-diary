#include "day4_day3RE.h"
#include <iostream>

int main()
{
	//반복문, for문

	//for( [초기식]; [조건식]; [증감식] ) {}

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {  //짝수판별 조건식
			std::cout << "현재 i는 " << i << std::endl;
		}
	}

	//[continue] , [break]

	//5일 때, 멈추기
	for (int i = 0; i < 10; i++) {
		std::cout << "현재 i는 " << i << std::endl;
		if (i == 5) {
			break;  //break, 원하는 값을 얻으면 정지.
		}
	}

	//continue
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) continue;  //조건식에 해당하는 것을 넘기고 다음 단계를 진행. 해당 조건에 만족하는 값을 무시하고 다음 단계로 진행하는 것이다 -> 무시하고 계속하기.
		std::cout << "현재 i는 " << i << std::endl;
	}

	//2중 for문
	for (int i = 0; i < 10; i++) {
		std::cout << "현재 단 : " << i << std::endl;
		for (int j = 0; j < 10; j++) {
			std::cout << i << "x" << j << "=" << i * j << std::endl;
		}
	}

	std::cout << std::endl;

	char n = 'A';

	char name[] = { 'H', 'Y', 'U', 'N' };

	for (int i = 0; i < 4; i++) {
		std::cout << name[i];
	}
	
}