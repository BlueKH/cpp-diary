#include "day2_1.h"
#include <iostream>

//�Լ�
int AddSum1(int x1, int x2)
{
	int result;

	result = x1 + x2;  //��
	std::cout << "�� ���� ���� " << result << std::endl;

	return result;  //��ȯ, ������� ��ȯ�Ѵ�(�����ش�).
}

//�� ���� ���� ���� ��ȯ�ϴ� �Լ�
int AddSum(int a, int b)
{
	std::cout << "���� �Լ� ����" << std::endl;
	int result;
	result = a + b;
	return result;
}

//�� ���� ���� ���� ��ȯ�ϴ� �Լ�
int Substract(int a, int b)
{
	std::cout << "�E�� �Լ� ����" << std::endl;
	int result;
	result = a - b;
	return result;
}

//�� ���� ���� ���� ��ȯ�ϴ� �Լ�
int Multiply(int a, int b)
{
	std::cout << "���� �Լ� ����" << std::endl;
	int result;
	result = a * b;
	return result;
}

//�� ���� ���� �������� ��ȯ�ϴ� �Լ�
int Divide(int a, int b)
{
	std::cout << "������ �Լ� ����" << std::endl;
	int result;
	result = a / b;
	return result;
}

int main()
{
	//�Է� �ް� ����� �ϴ� ���, ���� tool
	//�Լ�(function), method(���)
	/*
	int inputA;
	std::cin >> inputA;
	std::cout << "inputA �� : " << inputA << std::endl;
	*/

	int inputA;
	int inputB;

	std::cout << "ù��° ���� �Է�" << std::endl;
	std::cin >> inputA;
	std::cout << "�ι�° ���� �Է�" << std::endl;
	std::cin >> inputB;

	AddSum1(inputA, inputB);

	int choose;
	std::cout << "1�� ����, 2�� ����, 3�� ����, 4�� ������" << std::endl;
	std::cin >> choose;

	if (choose == 1) {
		int result;
		result = AddSum(inputA, inputB);
		std::cout << "���� �����>> " << result << std::endl;
	}
	else if (choose == 2) {
		int result;
		result = Substract(inputA, inputB);
		std::cout << "���� �����>> " << result << std::endl;
	}
	else if (choose == 3) {
		int result;
		result = Multiply(inputA, inputB);
		std::cout << "���� �����>> " << result << std::endl;
	}
	else if (choose == 4) {
		int result;
		result = Divide(inputA, inputB);
		std::cout << "������ �����>> " << result << std::endl;
	}

	//������ �����Ͱ� � ������ Ÿ������ ���� -> �����ڰ� ������ ���ؾ���
	//��������
}
