#include "day3_3.h"
#include <iostream>

//continue, break

int main()
{
	int i;
	for (i = 0; i < 100; i++) {
		std::cout << "for�� " << std::endl;
		if (i == 10) {
			std::cout << "10�϶�" << std::endl;
			break;  //���������°�.
		}
	}

	int j;
	for (j = 0; j < 100; j++) {
		if (j % 2 == 0) {
			continue;  //(skip) ���⼭�� ¦���� �ѱ�� �����̴�.
		}
		std::cout << "for�� ���� j�� " << j << std::endl;
	}
	
}