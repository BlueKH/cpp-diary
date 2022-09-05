#include "day1_1.h"
#include <iostream>

//주석 - 코드에 관여하지 않음. 특이 사항 메모.
//#include -> 포함하다, iostream -> 표준입출력 라이브러리
// "" -> 큰따옴표: 문자열.
//std -> 표준템플릿
//F5 -> 디버깅 시작, ctrl + F5 -> 디버그 하지 않고 시작

int main()
{
	std::cout << "Hello Hyun" << std::endl;

	int i;  //정수
	float f;  //실수
	char c;  //문자
	bool b;  //불리언(true, false)

	i = 11;  // = (대입)

	std::cout << i << std::endl;

	std::cin >> i;  //cin - 입력
	std::cout << i << std::endl;
}