#include "day4_6.h"
#include <iostream>

int main()
{
	//������ ����
	//1. �����ʹ� �ּҰ� �����ϴ� ���� -> �����ͳ��� ��Ģ ���� �� ������ �����ϰ� ���ǹ��ϴ�.
	//2. ���� -> �� �� ������ ������ �Ÿ��� ��Ÿ��. �������� (�̵� �Ÿ�t - ���۰Ÿ�t) ���� ������ �Ÿ�.
	//3. �����Ϳ� ���� ���� ���ϰų� ���� ���� ����, �ּ��̱� ������ �Ǽ��� �Ұ�.

	int a = 1;
	int* pa = &a;

	double db = 0.1;
	double* pdb = &db;

	std::cout << "a�� �� " << a << std::endl;
	std::cout << "pa�� �� " << pa << std::endl;
	std::cout << "pa + 1�� �� " << pa + 1 << std::endl;
	
	std::cout << "db�� �� " << db << std::endl;
	std::cout << "pdb�� �� " << pdb << std::endl;
	std::cout << "pdb + 1�� �� " << pdb + 1 << std::endl;

	//������ Ÿ�Ժ��� ���� ��, �ش� Ÿ�� ũ�⸸ŭ ����.
}