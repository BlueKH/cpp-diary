#include "day4test2.h"
#include <iostream>

//주소연산자 : 주소 연산자(&) 주소 연산자는 변수의 이름 앞에 사용하여, 해당 변수의 주소값을 반환한다.
//참조연산자 : 참조 연산자는 포인터의 이름이나 주소 앞에 사용하여, 포인터에 가리키는 주소에 저장된 값을 반환한다.

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
	//Swap :: (어떤 것을 주고 그 대신 다른 것으로) 바꾸다.

	/*실습 첫번째 방법
	int num1 = 20;
	int num2 = 5;

	int temp;
	temp = num1;

	num1 = num2;
	num2 = temp;

	std::cout << "num1 값은 " << num1 << std::endl;
	std::cout << "num1 값은 " << num2 << std::endl;
	*/

	//실습 두번째 방법 - 함수와 포인터 사용
	int n1 = 20;
	int n2 = 5;

	SwapWrong(n1, n2);
	std::cout << "n1 값은 " << n1 << std::endl;
	std::cout << "n2 값은 " << n2 << std::endl;

	Swap(&n1, &n2);
	std::cout << "n1 값은 " << n1 << std::endl;
	std::cout << "n2 값은 " << n2 << std::endl;

	Swap1(n1, n2);
	std::cout << "n1 값은 " << n1 << std::endl;
	std::cout << "n2 값은 " << n2 << std::endl;

	/*
	My Code
	int x = 20;
	int y = 5;

	std::cout << "처음 x, y값>> " << "x = " << x << " , " << "y = " << y << std::endl;
	int a;
	a = x;
	x = y;
	y = a;

	std::cout << "Swap 후 x, y값>> " << "x = " << x << " , " << "y = " << y << std::endl;
	*/
}