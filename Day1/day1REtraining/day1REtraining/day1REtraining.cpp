#include "day1REtraining.h"
#include <iostream>

//�ǽ�����
//���ڸ� 5�� �Է��� �ް�, 1��, 2��~5��
//1���� 3���� ��
//2���� 4���� ����
//3���� 5���� ��
//1���� 5���� ������
//����ϱ�.

int main()
{
	int inputA;
	int inputB;
	int inputC;
	int inputD;
	int inputE;

	std::cout << "ù ��° ���� �Է�" << std::endl;
	std::cin >> inputA;
	std::cout << "�� ��° ���� �Է�" << std::endl;
	std::cin >> inputB;
	std::cout << "�� ��° ���� �Է�" << std::endl;
	std::cin >> inputC;
	std::cout << "�� ��° ���� �Է�" << std::endl;
	std::cin >> inputD;
	std::cout << "�ټ� ��° ���� �Է�" << std::endl;
	std::cin >> inputE;

	std::cout << "�Է� ���� �� �ټ� ����" << inputA << inputB << inputC << inputD << inputE << std::endl;

	int resultSum = inputA + inputC;
	std::cout << "1���� 3���� ��" << resultSum << std::endl;

	int resultSub = inputB - inputD;
	std::cout << "2���� 4���� ��" << resultSub << std::endl;

	int resultMulti = inputC * inputE;
	std::cout << "3����	5���� ��" << resultMulti << std::endl;

	int resultDiv = inputA / inputE;
	std::cout << "1���� 5���� ������" << resultDiv << std::endl;
}

/*
My Code

int main()
{
	int a, b, c, d, e;
	cout << "���� �ټ� ���� �Է��϶�>> " << endl;
	cin >> a >> b >> c >> d >> e;

	cout << "���� a�� c�� ��>> " << sum(a, c) << endl;
	cout << "���� b�� d�� �E��>> " << substract(b, d) << endl;
	cout << "���� c�� e�� ��>> " << multiple(c, e) << endl;
	cout << "���� a�� e�� ������>> " << divide(a, e) << endl;

	return 0;
}

int sum(int x, int y) {
	int sum;
	sum = x + y;

	return sum;
}

int substract(int x, int y) {
	int sub;
	sub = x - y;

	return sub;
}

int multiple(int x, int y) {
	int mul;
	mul = x * y;

	return mul;
}


int divide(int x, int y) {
	int div;
	div = x / y;

	return div;
}
*/