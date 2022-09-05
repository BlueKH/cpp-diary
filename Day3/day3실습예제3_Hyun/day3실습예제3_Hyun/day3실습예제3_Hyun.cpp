#include "day3실습예제3_Hyun.h"
#include <iostream>

/*
<구구단> 실습예제
2중 for문
1~9단
Decoration
*/

int main()
{
	std::cout << "<=====구구단=====>" << std::endl;

	for (int i = 1; i < 10; i++) {
		std::cout << std::endl;
		std::cout << "===" << i << "단===" << std::endl;
		for (int j = 1; j < 10; j++) {
			int multi = i * j;
			std::cout << i << "곱하기" << j << " = " << multi << std::endl;
		}
	}
}