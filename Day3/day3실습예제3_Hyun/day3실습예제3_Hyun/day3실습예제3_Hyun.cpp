#include "day3�ǽ�����3_Hyun.h"
#include <iostream>

/*
<������> �ǽ�����
2�� for��
1~9��
Decoration
*/

int main()
{
	std::cout << "<=====������=====>" << std::endl;

	for (int i = 1; i < 10; i++) {
		std::cout << std::endl;
		std::cout << "===" << i << "��===" << std::endl;
		for (int j = 1; j < 10; j++) {
			int multi = i * j;
			std::cout << i << "���ϱ�" << j << " = " << multi << std::endl;
		}
	}
}