#include "day3_2.h"
#include <iostream>

// <for��> - �ݺ���
//for(�ʱ��; ���ǽ�; ������) {}

int main()
{
	int i;

	for (i = 0; i < 10; i++) {
		std::cout << "i�� ����(for�� ����)" << i << std::endl;
		if (i == 2) {
			std::cout << "i �� 2�϶�" << std::endl;
		}
		else {
			std::cout << "i �� 2�� �ƴҶ�" << std::endl;
		}
	}
}