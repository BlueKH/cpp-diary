#include "day3�ǽ�����1_Hyun.h"
#include <iostream>

int main()
{
	int i;
	for (i = 1; i < 100; i++) {
		if (i % 2 == 0) {
			std::cout << "i�� ¦��>> " << i << std::endl;
		}
		else {
			std::cout << "i���� Ȧ���̴�." << std::endl;
		}
	}
}