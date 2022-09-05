#include "day4test1.h"
#include <iostream>

int main()
{
	//포인터와 배열
	//std::cout << "배열 이름으로 배열의 요소 출력"
	//"포인터로 배열의 요소 출력
	int arr[3] = { 10,20,30 };
	int* pt_arr = arr;

	std::cout << "0번 인덱스>> " << *pt_arr << std::endl;
	std::cout << "1번 인덱스>> " << *(pt_arr + 1) << std::endl;
	std::cout << "2번 인덱스>> " << *(pt_arr + 1) << std::endl;

	std::cout << "배열 이름으로 배열의 요소 출력" << arr[0] << "," << arr[1] << "," << arr[2] << std::endl;;

	std::cout << "포인터로 배열의 요소 출력" << pt_arr[0] << "," << pt_arr[1] << "," << pt_arr[2] << std::endl;;

	std::cout << "포인터로 배열의 요소 출력" << *(arr) << "," << *(arr + 1) << "," << *(arr + 2) << std::endl;
}