#include "day2�ǽ�1Hyun.h"
#include <iostream>

//�ǽ�
//number 1 ~ 3
//���� ���� �Է¹ް�, �Է¹��� ������ ��ȯ�ϱ�
// * ���
//����
//�Է¹޴� �Լ�(�Լ� 1���� �����)
//��¹޴� �Լ�(�Լ� 1���� �����)

using namespace std;

int a, b, c;

void Input() {
	cout << "���� 3���� �Է��Ͻÿ�>> " << endl;
	cin >> a >> b >> c;
}

void Output() {
	cout << "�Է¹��� ���� 3���� ��>> " << a << " " << b << " " << c << endl;
}

int main()
{
	a = 0;
	b = 0;
	c = 0;

	Output();

	Input();
	Output();
	Input();
	Output();
	Input();
	Output();
}