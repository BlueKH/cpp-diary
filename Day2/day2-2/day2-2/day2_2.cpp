#include "day2_2.h"
#include <iostream>

//  ***�Լ��� ���� ***
//���� -> ���� ���� �� ���� ����
//������ �Լ��� ����� ���� ��, void ���.

//���� ����, �Է� ���� ����
int inputA;
int inputB;

int choose;  //���� ���� ���� ����

//�Է¹ޱ� �Լ�
//void -> ��(����ִ�), ���� �������� ����, �޼���, ����
void InputPhase()
{
	std::cout << "ù��° inputA �Է� ���ּ���" << std::endl;
	std::cin >> inputA;

	std::cout << "�ι�° inputB �Է� ���ּ���" << std::endl;
	std::cin >> inputB;
}

//���� ����
void StartText()
{
	std::cout << "�Լ� ȣ�� ��" << std::endl;
	std::cout << "inputA �� ���� " << inputA << std::endl;
	std::cout << "inputB �� ���� " << inputB << std::endl;
}

//�Է� �� �� ��� �Լ�
void AfterInput()
{
	std::cout << "�Է¹��� �� inputA ����" << inputA << std::endl;
	std::cout << "�Է¹��� �� inputB ����" << inputB << std::endl;
}

//���� ����
void ChooseCalculate()
{
	std::cout << "1�� ����, 2�� ����, 3�� ����, 4�� ������" << std::endl;
	std::cin >> choose;
}

int Add(int a, int b)
{
	int result;
	result = a + b;
	return result;
}

int Substract(int a, int b)
{
	int result = a - b;
	return result;
}

int Multiply(int a, int b)
{
	int result;
	result = a * b;
	return result;
}

int Divide(int a, int b)
{
	int result;
	result = a / b;
	return result;
}

int main()
{
	StartText();
	InputPhase();
	AfterInput();
	ChooseCalculate();

	if (choose == 1) {
		//���� ����
		Add(inputA, inputB);
	}
	else if (choose == 2) {
		if (inputA > inputB) {
			Substract(inputA, inputB);
		}
		else if (inputA < inputB) {
			Substract(inputB, inputA);
		}
		else {
			std::cout << "�������� 0 �̴�." << std::endl;
		}
	}

	else if (choose == 3) {
		Multiply(inputA, inputB);
	}
	else if (choose == 4) {
		Divide(inputA, inputB);
	}
	else {
		std::cout << "1 ~ 4�� �ƴ� �ٸ��� ����." << std::endl;
	}
}