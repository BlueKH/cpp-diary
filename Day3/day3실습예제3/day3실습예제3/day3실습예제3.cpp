#include "day3�ǽ�����3.h"
#include <iostream>

/*
<������> �ǽ�����
2�� for��
1~9��
Decoration
*/

int main()
{
	for (int i = 1; i < 10; i++) {  //i�� ��. �����Ͽ� ���ϴ� �ܸ� �� �� �ִ�.
		std::cout << "���� �� ::" << i << std::endl;
		for (int j = 1; j < 10; j++) {
			std::cout << i << "x" << j << "=" << i * j << std::endl;
		}
	}
}