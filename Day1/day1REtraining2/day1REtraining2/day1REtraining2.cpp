#include "day1REtraining2.h"
#include <iostream>


//if��, if -> ���࿡
//if(), ���࿡(~�ϸ�)
//2���� ������ �Է¹ް�
//��Ģ���� �� �ϳ��� ��ȣ�� ���� ��
//�ش� ��Ģ������ ���� ���

int main()
{
	int inputA;
	int inputB;

	std::cout << "������ �� �� �Է����ּ���" << std::endl;
	std::cin >> inputA >> inputB;

	int choose;

	std::cout << "���Ͻô� ������ ������" << std::endl;
	std::cout << "1.����, 2.����, 3.����, 4.������" << std::endl;
	std::cin >> choose;

	if (choose == 1) {  // =(����), ==(����, ��ȣ)
		//choose�� 1�̸� ���Ⱑ ����.
		//���� ����.
		int resultSum = inputA + inputB;
		std::cout << "�� ���� �� " << resultSum << std::endl;
	}
	else if (choose == 2) {
		int resultSub = inputA - inputB;
		std::cout << "�� ���� �� " << resultSub << std::endl;
	}
	else if (choose == 3) {
		int resultMulti = inputA * inputB;
		std::cout << "�� ���� �� " << resultMulti << std::endl;
	}
	else if (choose == 4) {
		int resultDiv = inputA / inputB;
		std::cout << "�� ���� ������ " << resultDiv << std::endl;
	}
	else {  //�� ��
		std::cout << "1�� ~ 4�� �߿� ����ּ���" << std::endl;
	}

}