#include "day4_6.h"
#include <iostream>

int main()
{
	//포인터 연산
	//1. 포인터는 주소값 저장하는 변수 -> 포인터끼리 사칙 연산 중 뺄셈을 제외하고 무의미하다.
	//2. 뺄셈 -> 두 개 포인터 사이의 거리를 나타냄. 물리에서 (이동 거리t - 시작거리t) 같은 물리적 거리.
	//3. 포인터에 정수 값을 더하거나 빼는 것은 가능, 주소이기 때문에 실수는 불가.

	int a = 1;
	int* pa = &a;

	double db = 0.1;
	double* pdb = &db;

	std::cout << "a의 값 " << a << std::endl;
	std::cout << "pa의 값 " << pa << std::endl;
	std::cout << "pa + 1의 값 " << pa + 1 << std::endl;
	
	std::cout << "db의 값 " << db << std::endl;
	std::cout << "pdb의 값 " << pdb << std::endl;
	std::cout << "pdb + 1의 값 " << pdb + 1 << std::endl;

	//데이터 타입별로 연산 후, 해당 타입 크기만큼 증가.
}