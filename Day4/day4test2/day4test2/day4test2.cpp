#include "day4test2.h"
#include <iostream>

//�ּҿ����� : �ּ� ������(&) �ּ� �����ڴ� ������ �̸� �տ� ����Ͽ�, �ش� ������ �ּҰ��� ��ȯ�Ѵ�.
//���������� : ���� �����ڴ� �������� �̸��̳� �ּ� �տ� ����Ͽ�, �����Ϳ� ����Ű�� �ּҿ� ����� ���� ��ȯ�Ѵ�.

void SwapWrong(int num1, int num2)  //InCorrect
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void Swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void Swap1(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main()
{
	//Swap :: (� ���� �ְ� �� ��� �ٸ� ������) �ٲٴ�.

	/*�ǽ� ù��° ���
	int num1 = 20;
	int num2 = 5;

	int temp;
	temp = num1;

	num1 = num2;
	num2 = temp;

	std::cout << "num1 ���� " << num1 << std::endl;
	std::cout << "num1 ���� " << num2 << std::endl;
	*/

	//�ǽ� �ι�° ��� - �Լ��� ������ ���
	int n1 = 20;
	int n2 = 5;

	SwapWrong(n1, n2);
	std::cout << "n1 ���� " << n1 << std::endl;
	std::cout << "n2 ���� " << n2 << std::endl;

	Swap(&n1, &n2);
	std::cout << "n1 ���� " << n1 << std::endl;
	std::cout << "n2 ���� " << n2 << std::endl;

	Swap1(n1, n2);
	std::cout << "n1 ���� " << n1 << std::endl;
	std::cout << "n2 ���� " << n2 << std::endl;

	/*
	My Code
	int x = 20;
	int y = 5;

	std::cout << "ó�� x, y��>> " << "x = " << x << " , " << "y = " << y << std::endl;
	int a;
	a = x;
	x = y;
	y = a;

	std::cout << "Swap �� x, y��>> " << "x = " << x << " , " << "y = " << y << std::endl;
	*/
}