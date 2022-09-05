#include "day2RE.h"
#include <iostream>
/*문법
if (조건식 1)
{
	조건식 1이 참(true)일 때, 실행되는 곳
}
else if (조건식 2) {
	조건식 2가 참(true)일 때, 실행되는 곳
}
else {
	조건식이 모두 거짓(false)일 때, 실행되는 곳
		-> 조건식 1, 2 둘 다 참이 아닐 때.
}
*/

//점수별로 등급을 매겨보자
//90점 이상은 A등급입니다 출력
//80점 이상은 B등급입니다 출력
//70점 이상은 C등급입니다 출력
//60점 이상은 D등급입니다 출력
//그 이하는, F등급입니다.
//0~100(정수)

int main()
{
	int score;
	score = 66;

	// > 초과, < 미만, >= 이상, <= 이하

	if (score >= 90) {
		std::cout << "A등급입니다" << std::endl;
	}
	else if (score >= 80) {
		std::cout << "B등급입니다" << std::endl;
	}
	else if (score >= 70) {
		std::cout << "C등급입니다" << std::endl;
	}
	else if (score >= 60) {
		std::cout << "D등급입니다" << std::endl;
	}
	else {
		std::cout << "F등급입니다" << std::endl;
	}
}