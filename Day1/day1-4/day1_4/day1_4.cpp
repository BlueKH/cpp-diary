#include "day1_4.h"
#include <iostream>


/*if��
result = inpA + inpB;
std::cout << "���� ~ : " << result << std::endl;

//�� ����, ¦�� �϶�, '¦��'�� ���
//if() -> ���࿡(����)
//�� ����, Ȧ�� �϶�, 'Ȧ��'�� ���

if (result % 2 == 0)
{
	//if���� ������ �����ϸ�, ����Ǵ� ��.
	//¦���� ���.
	std::cout << "¦��" << std::endl;
}

if (result % 2 != 0)
{
	//if���� ������ �����ϸ�, ����Ǵ� ��.
	//Ȧ���� ���.
	std::cout << "Ȧ��" << std::endl;
}*/


int main()
{
	int k, l;
	int result;

	std::cout << "���� �� �� �Է��Ͻÿ�>> " << std::endl;
	std::cin >> k >> l;
	result = k + l;

	if (result % 2 == 0) {
		//¦��
		std::cout << "¦��" << std::endl;
	}
	else if (result % 2 != 0) {
		//Ȧ��
		std::cout << "¦��" << std::endl;
	}

	std::cout << std::endl;  //�ٶ��

	int m;
	std::cout << "���� �Է�>> " << std::endl;
	std::cin >> m;

	if (m > 1) {
		result = m + 1;
		std::cout << "answer: " << result << std::endl;
	}
	else if (m < 1) {
		result = m - 1;
		std::cout << "answer: " << result << std::endl;
	}
	else {
		result = m / 1;
		std::cout << "answer: " << result << std::endl;
	}
	
}