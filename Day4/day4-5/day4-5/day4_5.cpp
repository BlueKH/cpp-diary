#include "day4_5.h"
#include <iostream>

int main()
{
	//����������
	int p = 10;
	int* pt = &p;
	int** ppt = &pt;

	std::cout << "p�� �� : " << p << std::endl;
	std::cout << "&p�� �� : " << &p << std::endl;

	std::cout << "pt�� �� : " << pt << std::endl;
	std::cout << "*pt�� �� : " << *pt << std::endl;
	std::cout << "&pt�� �� : " << &pt << std::endl;

	std::cout << "ppt�� �� : " << ppt << std::endl;
	std::cout << "&ppt�� �� : " << &ppt << std::endl;
	std::cout << "*ppt�� �� : " << *ppt << std::endl;
	std::cout << "**ppt�� �� : " << **ppt << std::endl;
}