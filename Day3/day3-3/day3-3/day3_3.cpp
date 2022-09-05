#include "day3_3.h"
#include <iostream>

//continue, break

int main()
{
	int i;
	for (i = 0; i < 100; i++) {
		std::cout << "for문 " << std::endl;
		if (i == 10) {
			std::cout << "10일때" << std::endl;
			break;  //빠져나가는것.
		}
	}

	int j;
	for (j = 0; j < 100; j++) {
		if (j % 2 == 0) {
			continue;  //(skip) 여기서는 짝수를 넘기는 예시이다.
		}
		std::cout << "for문 진입 j는 " << j << std::endl;
	}
	
}