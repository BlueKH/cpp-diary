#include "day3�ǽ�����1.h"
#include <iostream>

//for���� ����ؼ� 1~100���� ���� �߿�, ¦���� ��� -> n % 2 ==0

int main()
{
	int i;
	for (i = 1; i < 10; i++) {
		if (i % 2 == 0) {
		std::cout << "¦�� = " << i << std::endl;
		}
	}
}

/*
My Code

int main()
{
	int i;

	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			std::cout << "i�� ¦��>> " << i << std::endl;
		}
		else {
			std::cout << "i�� Ȧ��" << std::endl;
		}
	}
}
*/