#include "day3실습예제4.h"
#include <iostream>

//실습예제
//이름이 무엇입니까? (출력)
//자기이름 입력(문자)
//어디에 사십니까?
//입력 -> 인터뷰 받은내용
//꿈이 무엇입니까?
//입력 -> 인터뷰 받은 내용
//(사는곳)에 사는 (이름) 입니다, 저는 (꿈) 하고 싶습니다 -> 출력

int main()
{
	char name[100];
	char home[100];
	char dream[100];

	std::cout << "이름이 무엇입니까?" << std::endl;
	std::cin >> name;
	std::cout << "어디에 사십니까?" << std::endl;
	std::cin >> home;
	std::cout << "꿈이 무엇입니까?" << std::endl;
	std::cin >> dream;

	std::cout << home << "에 사는 " << name << "입니다, 저는 " << dream << " 하고 싶습니다." << std::endl;
}