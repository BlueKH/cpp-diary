#include "day4test1.h"
#include <iostream>

int main()
{
	//�����Ϳ� �迭
	//std::cout << "�迭 �̸����� �迭�� ��� ���"
	//"�����ͷ� �迭�� ��� ���
	int arr[3] = { 10,20,30 };
	int* pt_arr = arr;

	std::cout << "0�� �ε���>> " << *pt_arr << std::endl;
	std::cout << "1�� �ε���>> " << *(pt_arr + 1) << std::endl;
	std::cout << "2�� �ε���>> " << *(pt_arr + 1) << std::endl;

	std::cout << "�迭 �̸����� �迭�� ��� ���" << arr[0] << "," << arr[1] << "," << arr[2] << std::endl;;

	std::cout << "�����ͷ� �迭�� ��� ���" << pt_arr[0] << "," << pt_arr[1] << "," << pt_arr[2] << std::endl;;

	std::cout << "�����ͷ� �迭�� ��� ���" << *(arr) << "," << *(arr + 1) << "," << *(arr + 2) << std::endl;
}