#include "day2RE_Hyun.h"
#include <iostream>


//점수별로 등급을 매겨보자
//90점 이상은 A등급입니다 출력
//80점 이상은 B등급입니다 출력
//70점 이상은 C등급입니다 출력
//60점 이상은 D등급입니다 출력
//그 이하는, F등급입니다.
//0~100(정수)

int main()
{
	int x;  //점수
	std::cout << "점수를 입력하시오>> ";
	std::cin >> x;

	if (x >= 90) {
		std::cout << "A등급입니다" << std::endl;
	}
	else if (x >= 80 && x < 90) {
		std::cout << "B등급입니다" << std::endl;

	}
	else if (x >= 70 && x < 80) {
		std::cout << "C등급입니다" << std::endl;
	}
	else if (x >= 60 && x < 70) {
		std::cout << "D등급입니다" << std::endl;
	}
	else if (x >= 0 && x < 60) {
		std::cout << "F등급입니다" << std::endl;
	}
	else {
		std::cout << "점수 오류입니다, 재입력 필요." << std::endl;
	}

}