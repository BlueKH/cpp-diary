#include "day1_3.h"
#include <iostream>

//���� �� �� �Է¹ް� �� ���� ���

int sum(int x, int y);

int main()
{
	int a, b;
	std::cout << "���� �� ���� �Է��Ͻÿ�>> " << std::endl;
	std::cin >> a >> b;

	std::cout << "�� ������ ��>> " << sum(a, b) << std::endl;
}


int sum(int x, int y) {
	int result;
	result = x + y;
	return result;
}
