#include "day1_2.h"
#include <iostream>

int main()
{
	int inputA, inputB;
	int result;
	int calculate;  // 1�� ����, 2�� ����, 3�� ����, 4�� ������

	std::cout << "������ �� �� �Է��϶�>> " << std::endl;
	std::cin >> inputA >> inputB;
	std::cout << "1 -> ����, 2 -> ����, 3 -> ����, 4 -> ������" << std::endl;
	std::cin >> calculate;

	//calculate��  1�� ��, �� ���� ��
	if (calculate == 1) {
		result = inputA + inputB;
		std::cout << "�ɼ� 1, ��>> " << result << std::endl;
	}

	//calculate�� 2�� ��, �� ���� ��
	if (calculate == 2) {
		result = inputA - inputB;
		std::cout << "�ɼ� 2, ��>> " << result << std::endl;
	}

	//calculate�� 3�� ��, �� ���� ��
	if (calculate == 3) {
		result = inputA * inputB;
		std::cout << "�ɼ� 3, ��>> " << result << std::endl;
	}

	//calculate�� 4�� ��, �� ���� ������
	if (calculate) {
		result = inputA / inputB;
		std::cout << "�ɼ� 4, ������>> " << result << std::endl;
	}
}
