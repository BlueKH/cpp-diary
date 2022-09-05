#include "day4_7.h"
#include <iostream>

/*
void SwapWrong(int num1, int num2)  //InCorrect
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

=> 안되는 이유.

*/

//main -> 실행 메인. '이름' '함수'

int main()
{
	int i = 99;
	std::cout << "for문 바깥 i " << i << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << "for문 속 i " << i << std::endl;
		if (i == 2) {
			int i = 99;
			std::cout << "i속 " << i << std::endl;
		}
	}
}

/*
void SwapWrong 과 main은 서로 다른 지역.
*/