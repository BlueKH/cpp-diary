#include "day2test1.h"
#include <iostream>

//�ǽ�
//number 1 ~ 3
//���� ���� �Է¹ް�, �Է¹��� ������ ��ȯ�ϱ�
//���
//����
//�Է¹޴� �Լ�(�Լ� 1���� �����)
//��¹޴� �Լ�(�Լ� 1���� �����)

int number1;
int number2;
int number3;

//�Է¹޴� �Լ�
void Inputer()
{
	//���� ���� �Է¹���
	std::cout << "�Է� 1" << std::endl;
	std::cin >> number1;
	std::cout << "�Է� 2" << std::endl;
	std::cin >> number2;
	std::cout << "�Է� 3" << std::endl;
	std::cin >> number3;
}

void Printer()
{
	//����ϱ�
	std::cout << "number 1�� ����" << number1 << std::endl;
	std::cout << "number 2�� ����" << number2 << std::endl;
	std::cout << "number 3�� ����" << number3 << std::endl;
}

int main()
{
	number1 = 1;
	number2 = 2;
	number3 = 3;

	Inputer();
	Printer();
	Inputer();
	Printer();
	Inputer();
	Printer();
}