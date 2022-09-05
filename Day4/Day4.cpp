#include "Day4.h"
#include <iostream>


//매개 변수 , - 둘 사이에서 양편의 관계를 맺어 줌.
void SwapInCorrect(int num1, int num2)
{
	//틀린 오답 
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

//매개 변수 , - 둘 사이에서 양편의 관계를 맺어 줌.
void Swap1(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void Swap2(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
int main()
{
	/*
	//i 위치 간, 차이
	int i = 99;
	std::cout << "for문 바깥 i " << i << std::endl;
	for (int i = 0; i < 10; i++) //한정
	{
		std::cout << "for문 속 i " << i << std::endl;
		if (i == 2)
		{
			int i = -99;
			std::cout <<"i속 " << i << std::endl;
		}
	}
	*/

	//pointer
	//Swap :: (어떤 것을 주고 그 대신 다른 것으로) 바꾸다,
	//실습
	//int p1 = 20; //x123123123
	//int p2 = 5;	 //x123123123

	//주소연산자 : 주소 연산자(&) 주소 연산자는 변수의 이름 앞에 사용하여, 
	//해당 변수의 주소값을 반환합니다. 

	//참조연산자 : 참조 연산자는 포인터의 이름이나 주소 앞에 사용하여, 
	// 포인터에 가리키는 주소에 저장된 값을 반환합니다
	//SwapIC(p1, p2);
	//Swap1(&p1, &p2);
	//Swap2(p1, p2);

	//std::cout << "p1 값은 " << p1 << std::endl;
	//std::cout << "p2 값은 " << p2 << std::endl;

	//포인터(Pointer)
	// - 특정 변수의 (메모리)주소를 가리키는 [~담는] 변수 

	//=======================
	/*
	int a = 10;
	int* pa = &a;

	std::cout << "a의 값" << a << std::endl;
	std::cout << "pa의 값" << pa << std::endl;

	//* 이름이나,주소 앞에 사용하여, 해당 주소를 참조하여 주소에 저장되어 있는 값을 반환한다
	//< 주소연산자 (&) >
	std::cout << "주소연산자 결과" << &a << std::endl;
	//< 참조연산자 (*) >
	std::cout << "참조연산자 결과" << *pa << std::endl;
	std::cout << "주소연산자와 참조연산자 동시 사용 결과" << *&a << std::endl;
	*/
	//=======================

	// *포인터는 할당하려면, == 변수의 자료형 
	// 이유 :: 역참조 시, 자료형이 일치하지않으면 어떤 자료형으로 해석해야하는지 판단 X 

	/* -> 주소는 변수의 데이터 타입과 관계없이 동일한 사이즈이다
	//* int 4바이트, char 1바이트, double 8바이트
	int p = 10;
	int* pt = &p;

	char alpha = 'A';
	char* palpha = &alpha;

	double db = 1.23;
	double* pdb = &db;

	//std::cout << "int 형 p " << p << std::endl;
	std::cout << "int 형 pt 크기 값은 :  " << sizeof(pt) << std::endl;

	//std::cout << "char 형 alpha " << alpha << std::endl;
	std::cout << "char 형 palpha  크기 값은 : " << sizeof(palpha) << std::endl;

	//std::cout << "double 형 db" << db << std::endl;
	std::cout << "double 형 pdb  크기 값은 :  " << sizeof(pdb) << std::endl;
	*/

	/*
	//이중포인터
	int p = 10;             //  p = 10
	int* pt = &p;          // pt = [p주소]
	int** ppt = &pt;          //  ppt = [pt주소]

	std::cout << "p의 값 : " << p << std::endl;
	std::cout << "&p의 값 : " << &p << std::endl;
	std::cout << "pt의 값 : " << pt << std::endl;
	std::cout << "*pt의 값 : " << *pt << std::endl;
	std::cout << "&pt의 값 : " << &pt << std::endl;
	std::cout << "ppt의 값 : " << ppt << std::endl;
	std::cout << "&ppt의 값 : " << &ppt << std::endl;
	std::cout << "*ppt의 값 : " << *ppt << std::endl;
	std::cout << "**ppt의 값 : " << **ppt << std::endl;
	*/

	//포인터 연산
	//1. 포인터는 주소 값 저장하는 변수 -> 포인터끼리 사칙 연산 중 뺄셈을 제외하고 무의미
	//2. 뺄셈 -> 두 개 포인터 사이의 거리를 나타냄
	//3. 포인터에 정수 값을 더하거나 뺴는 것은 가능 ,  but 실수는 안됨 X 

	/*
	int a = 1;
	int* pa = &a;
	double db = 0.1;
	double* pdb = &db;
	std::cout << "pa의 값" << a << std::endl;
	std::cout << "pa의 값  " << pa << std::endl;
	std::cout << "pa + 1의 값  " << pa + 1 << std::endl;
	std::cout << "db  " << db << std::endl;
	std::cout << " pdb의 값  " << pdb << std::endl;
	std::cout << "pdb + 1의 값  " << pdb + 1 << std::endl;
	*/
	//데이터 타입별로 연산 후, 증가량 int 4 만큼 
	//포인터와 배열
	//int arr[3] = { 10,20,30 };
	//int* pt_arr = arr;
	//std::cout << "배열 이름으로 배열의 요소 출력" << arr[0] << "," << arr[1] << "," << arr[2] << std::endl;
	//std::cout << "포인터로 배열의 요소 출력" << pt_arr[0] << "," << pt_arr[1] << "," << pt_arr[2] << std::endl;
	//std::cout << "포인터로 배열의 요소 출력" << *(arr) << "," << *(arr + 1) << "," << *(arr + 2) << std::endl;

	// 출력될 i는 ?
    int i = 1;
	int k = 2;
	int* p1;
	int* p2;
	p1 = &i;
	p2 = &k;
	p1 = p2;
	*p1 = 3; 
	*p2 = 4;
	//주소 - 값은  
	std::cout << i << std::endl;

}