#include "day4_5.h"
#include <iostream>

int main()
{
	//이중포인터
	int p = 10;
	int* pt = &p;
	int** ppt = &pt;

	std::cout << "p의 값 : " << p << std::endl;
	std::cout << "&p의 값 : " << &p << std::endl;

	std::cout << "pt의 값 : " << pt << std::endl;
	std::cout << "*pt의 값 : " << *pt << std::endl;
	std::cout << "&pt의 값 : " << &pt << std::endl;

	std::cout << "ppt의 값 : " << ppt << std::endl;
	std::cout << "&ppt의 값 : " << &ppt << std::endl;
	std::cout << "*ppt의 값 : " << *ppt << std::endl;
	std::cout << "**ppt의 값 : " << **ppt << std::endl;
}