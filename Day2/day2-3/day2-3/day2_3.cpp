#include "day2_3.h"
#include <iostream>

// ***�Լ��� ����***
//���� -> ���� ������ ���� ����

int number1;  //���� ����

//������ �Է� �޴� �Լ�
void InputInt()
{
	std::cout << "���� �Է¹޴� �Լ�" << std::endl;

	std::cin >> number1;
}

int main()
{
	number1 = 99;  // =(����)
	std::cout << "number1 �Է� �� ����" << number1 << std::endl;
	InputInt();
	std::cout << "number1 �Է� �� ����" << number1 << std::endl;
}