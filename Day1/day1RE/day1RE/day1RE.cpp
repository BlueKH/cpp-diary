#include "day1RE.h"
#include <iostream>

//�ּ� -> ������ + ������, �����ڰ� ����ϴ� �޸�. Ư�� ������ �޸�. �ڵ忡 �������� �ʴ� �Է� ��.
//Ŭ���� �Լ� ����
int main()
{
	// <����ϱ�>
	//Hello World �� ��� �޾ƺ���
	std::cout << "Hello World" << std::endl;  //" " -> ����(��)��. endl(end line) �ٸ�ħ.

	//F5 - ����� ����. ctrl+F5 - ����� ���� �ʰ� ����.
	//����� -> Debug, ���� ��� ��.


	// <�Է��ϱ�>
	//�ϰ� ���� ��: ������ �� �� �Է� �ް� �� ���� ��� �غ���

	//������ �� �� �Է� �ް�, �ΰ� �������

	//int -> integer ����.
	int inputA;  //(������ Ÿ��) (�̸�)
	int inputB;
	//-> �����ϴ�

	std::cout << "���� �� ���� �Է��϶�>> " << std::endl;
	std::cin >> inputA >> inputB;
	std::cout << "���� �Է� A�� " << inputA << std::endl;
	std::cout << "���� �Է� B�� " << inputB << std::endl;

	//�����, (c)in - (c)out

	//�� -> ����
	std::cout << "���� �Է� A�� B�� ���� " << inputA + inputB << std::endl;

	//����� ������ �ϳ� ����
	int sumResult;
	sumResult = inputA + inputB;

	std::cout << "A�� B�� ���� " << sumResult << std::endl;  //���� ����.

	//��Ģ���� - ����, �E��, ����, ������
	int subResult;
	subResult = inputA - inputB;

	int mulResult;
	mulResult = inputA * inputB;  // * -> ���� ��ȣ

	//�������� �Ҽ�(prime number)ó�� �������� ������ ���� ���� ���� -> 10������� �� 0.1�� ǥ�� ����.
	int divResult;
	divResult = inputA / inputB;  // 1 ������ 3�� 1/3
}