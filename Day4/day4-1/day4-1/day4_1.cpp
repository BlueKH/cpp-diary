#include "day4_1.h"
#include <iostream>

int main()
{
	//string
	std::string letter = "H Y U N";

	std::cout << letter << std::endl;

	std::cout << "문자열 letter의 길이(length)는 = " << letter.length() << std::endl;  //함수사용시 소괄호() 작성 필요.
	std::cout << "문자열 letter의 크기(size)는 = " << letter.size() << std::endl;  //size는 데이터 크기. 문자열 길이는 length.

	//append -> 덧붙이다, 첨부하다
	letter.append("congratulation");
	std::cout << letter << std::endl;

	//검색을 컴퓨터에게 시키는 것을 지양해야 함
	std::cout << letter.find("N") << std::endl;  //find()는 전부 검색해버리기 때문에 사용하지 않는 것이 좋다.
}