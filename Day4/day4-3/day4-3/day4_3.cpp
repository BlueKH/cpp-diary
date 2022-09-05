#include "day4_3.h"
#include <iostream>

int main()
{
	//포인터(Pointer)
	// - 특정 변수의 (메모리)주소를 담는(가리키는) 변수
	//주소연산자 (&), 참조연산자(*)

	int a = 10;
	int* pa = &a;

	std::cout << "a의 값" << a << std::endl;
	std::cout << "pa의 값" << pa << std::endl;

	// * -> 포인터. 이름이나, 주소 앞에 사용하여 해당 주소를 참조(참고로 비교하고 대조하여 봄)하여 주소에 저장되어 있는 값을 반환하는것.
	std::cout << "주소연산자 결과" << &a << std::endl;
	std::cout << "참조연산자 결과" << *pa << std::endl;
	std::cout << "주소연산자와 참조연산자 동시 사용 결과" << *&a << std::endl;  //주소에 포인터를 사용하면 해당 주소에 있는 값을 가져온다.
}