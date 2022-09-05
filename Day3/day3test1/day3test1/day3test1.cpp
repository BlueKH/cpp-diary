#include "day3test1.h"
#include <iostream>

//영어 수학 국어 과학 점수를 판별해서 통과되는 학교 찾아보기

//시작 점수를 4개 입력받고 4개의 점수를 판별

//A학교는, 영어와 수학이 80점 이상이면 합격
//B학교는, 수학과 국어 중, 하나가 90점 이상이면 합격
//C학교는, 영어 수학 국어 모두 다 70점 이상이면 합격
//D학교는, 과학이 50점 이상이고, 수학과 영어 중 하나 이상이 80점 이상이면 합격
//E학교는, 과학 또는 영어가 60점 이상이면 합격

//정수를 입력하면, 합격가능한 학교가 출력되는 프로그램

int main()
{
	int englishP;
	int mathP;
	int koreanP;
	int scienceP;

	std::cout << "영어 점수 입력하기" << std::endl;
	std::cin >> englishP;
	std::cout << "수학 점수 입력하기" << std::endl;
	std::cin >> mathP;
	std::cout << "국어 점수 입력하기" << std::endl;
	std::cin >> koreanP;
	std::cout << "과학 점수 입력하기" << std::endl;
	std::cin >> scienceP;

	std::cout << "영어" << englishP << std::endl;
	std::cout << "수학" << mathP << std::endl;
	std::cout << "국어" << koreanP << std::endl;
	std::cout << "과학" << scienceP << std::endl;

	//A학교
	if (englishP >= 80 && mathP >= 80) {
		//A학교 조건을 참 - true 일때
		std::cout << "A학교 합격" << std::endl;
	}

	//B학교
	if (mathP >= 90 || koreanP >= 90) {
		//B학교 조건을 참 - true 일때
		std::cout << "B학교 합격" << std::endl;
	}

	//C학교
	if (englishP >= 70 && mathP >= 70 && koreanP >= 70) {
		//C학교 조건을 참 - true 일때
		std::cout << "C학교 합격" << std::endl;
	}

	//D학교
	if (scienceP >= 50 && (mathP >= 80 || englishP >= 80)) {
		//D학교 조건을 참 - true 일때
		std::cout << "D학교 합격" << std::endl;
	}

	//E학교
	if (scienceP >= 60 || englishP >= 60) {
		//E학교 조건을 참 - true 일때
		std::cout << "E학교 합격" << std::endl;
	}

}

/*
===잘못 작성한 My Code===
int main()
{
	char school;
	std::cout << "학교명을 입력하시오>> ";
	std::cin >> school;

	int eng, math, kor, sci;
	std::cout << "영어, 수학 국어 과학 점수를 차례로 입력하시오>> ";
	std::cin >> eng >> math >> kor >> sci;

	if (school == 'A') {
		if (eng >= 80 && math >= 80) {
			std::cout << "합격입니다" << std::endl;
		}
		else {
			std::cout << "불합격입니다" << std::endl;
		}
	}
	else if (school == 'B') {
		if (math >= 90 || kor >= 90) {
			std::cout << "합격입니다" << std::endl;
		}
		else {
			std::cout << "불합격입니다" << std::endl;
		}
	}
	else if (school == 'C') {
		if (eng >= 70 && math >= 70 && kor >= 70) {
			std::cout << "합격입니다" << std::endl;
		}
		else {
			std::cout << "불합격입니다" << std::endl;
		}
	}
	else if (school == 'D') {
		if (sci >= 50 && (math >= 80 || eng >= 80)) {
			std::cout << "합격입니다" << std::endl;
		}
		else {
			std::cout << "불합격입니다" << std::endl;
		}
	}
	else if (school == 'E') {
		if (sci >= 60 || eng >= 60) {
			std::cout << "합격입니다" << std::endl;
		}
		else {
			std::cout << "불합격입니다" << std::endl;
		}
	}
}

===잘못 작성한 My Code===
int main()
{
	int eng, math, kor, sci;
	std::cout << "영어, 수학 국어 과학 점수를 차례로 입력하시오>> ";
	std::cin >> eng >> math >> kor >> sci;

	if (eng >= 80 && math >= 80) {
		std::cout << "A학교에 합격" << std::endl;
	}
	else if (math >= 90 || kor >= 90) {
		std::cout << "B학교에 합격" << std::endl;
	}
	else if (eng >= 70 && math >= 70 && kor >= 70) {
		std::cout << "C학교에 합격" << std::endl;
	}
	else if (sci >= 50 && (math >= 80 || eng >= 80)) {
		std::cout << "D학교에 합격" << std::endl;
	}
	else if (sci >= 60 || eng >= 60) {
		std::cout << "E학교에 합격" << std::endl;
	}
	else {
		std::cout << "없음" << std::endl;
	}
}
*/