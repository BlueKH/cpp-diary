#include "day3실습예제3.h"
#include <iostream>

/*
<구구단> 실습예제
2중 for문
1~9단
Decoration
*/

int main()
{
	for (int i = 1; i < 10; i++) {  //i가 단. 조정하여 원하는 단만 볼 수 있다.
		std::cout << "현재 단 ::" << i << std::endl;
		for (int j = 1; j < 10; j++) {
			std::cout << i << "x" << j << "=" << i * j << std::endl;
		}
	}
}