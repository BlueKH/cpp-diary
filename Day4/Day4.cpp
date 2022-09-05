#include "Day4.h"
#include <iostream>


//�Ű� ���� , - �� ���̿��� ������ ���踦 �ξ� ��.
void SwapInCorrect(int num1, int num2)
{
	//Ʋ�� ���� 
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

//�Ű� ���� , - �� ���̿��� ������ ���踦 �ξ� ��.
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
	//i ��ġ ��, ����
	int i = 99;
	std::cout << "for�� �ٱ� i " << i << std::endl;
	for (int i = 0; i < 10; i++) //����
	{
		std::cout << "for�� �� i " << i << std::endl;
		if (i == 2)
		{
			int i = -99;
			std::cout <<"i�� " << i << std::endl;
		}
	}
	*/

	//pointer
	//Swap :: (� ���� �ְ� �� ��� �ٸ� ������) �ٲٴ�,
	//�ǽ�
	//int p1 = 20; //x123123123
	//int p2 = 5;	 //x123123123

	//�ּҿ����� : �ּ� ������(&) �ּ� �����ڴ� ������ �̸� �տ� ����Ͽ�, 
	//�ش� ������ �ּҰ��� ��ȯ�մϴ�. 

	//���������� : ���� �����ڴ� �������� �̸��̳� �ּ� �տ� ����Ͽ�, 
	// �����Ϳ� ����Ű�� �ּҿ� ����� ���� ��ȯ�մϴ�
	//SwapIC(p1, p2);
	//Swap1(&p1, &p2);
	//Swap2(p1, p2);

	//std::cout << "p1 ���� " << p1 << std::endl;
	//std::cout << "p2 ���� " << p2 << std::endl;

	//������(Pointer)
	// - Ư�� ������ (�޸�)�ּҸ� ����Ű�� [~���] ���� 

	//=======================
	/*
	int a = 10;
	int* pa = &a;

	std::cout << "a�� ��" << a << std::endl;
	std::cout << "pa�� ��" << pa << std::endl;

	//* �̸��̳�,�ּ� �տ� ����Ͽ�, �ش� �ּҸ� �����Ͽ� �ּҿ� ����Ǿ� �ִ� ���� ��ȯ�Ѵ�
	//< �ּҿ����� (&) >
	std::cout << "�ּҿ����� ���" << &a << std::endl;
	//< ���������� (*) >
	std::cout << "���������� ���" << *pa << std::endl;
	std::cout << "�ּҿ����ڿ� ���������� ���� ��� ���" << *&a << std::endl;
	*/
	//=======================

	// *�����ʹ� �Ҵ��Ϸ���, == ������ �ڷ��� 
	// ���� :: ������ ��, �ڷ����� ��ġ���������� � �ڷ������� �ؼ��ؾ��ϴ��� �Ǵ� X 

	/* -> �ּҴ� ������ ������ Ÿ�԰� ������� ������ �������̴�
	//* int 4����Ʈ, char 1����Ʈ, double 8����Ʈ
	int p = 10;
	int* pt = &p;

	char alpha = 'A';
	char* palpha = &alpha;

	double db = 1.23;
	double* pdb = &db;

	//std::cout << "int �� p " << p << std::endl;
	std::cout << "int �� pt ũ�� ���� :  " << sizeof(pt) << std::endl;

	//std::cout << "char �� alpha " << alpha << std::endl;
	std::cout << "char �� palpha  ũ�� ���� : " << sizeof(palpha) << std::endl;

	//std::cout << "double �� db" << db << std::endl;
	std::cout << "double �� pdb  ũ�� ���� :  " << sizeof(pdb) << std::endl;
	*/

	/*
	//����������
	int p = 10;             //  p = 10
	int* pt = &p;          // pt = [p�ּ�]
	int** ppt = &pt;          //  ppt = [pt�ּ�]

	std::cout << "p�� �� : " << p << std::endl;
	std::cout << "&p�� �� : " << &p << std::endl;
	std::cout << "pt�� �� : " << pt << std::endl;
	std::cout << "*pt�� �� : " << *pt << std::endl;
	std::cout << "&pt�� �� : " << &pt << std::endl;
	std::cout << "ppt�� �� : " << ppt << std::endl;
	std::cout << "&ppt�� �� : " << &ppt << std::endl;
	std::cout << "*ppt�� �� : " << *ppt << std::endl;
	std::cout << "**ppt�� �� : " << **ppt << std::endl;
	*/

	//������ ����
	//1. �����ʹ� �ּ� �� �����ϴ� ���� -> �����ͳ��� ��Ģ ���� �� ������ �����ϰ� ���ǹ�
	//2. ���� -> �� �� ������ ������ �Ÿ��� ��Ÿ��
	//3. �����Ϳ� ���� ���� ���ϰų� ���� ���� ���� ,  but �Ǽ��� �ȵ� X 

	/*
	int a = 1;
	int* pa = &a;
	double db = 0.1;
	double* pdb = &db;
	std::cout << "pa�� ��" << a << std::endl;
	std::cout << "pa�� ��  " << pa << std::endl;
	std::cout << "pa + 1�� ��  " << pa + 1 << std::endl;
	std::cout << "db  " << db << std::endl;
	std::cout << " pdb�� ��  " << pdb << std::endl;
	std::cout << "pdb + 1�� ��  " << pdb + 1 << std::endl;
	*/
	//������ Ÿ�Ժ��� ���� ��, ������ int 4 ��ŭ 
	//�����Ϳ� �迭
	//int arr[3] = { 10,20,30 };
	//int* pt_arr = arr;
	//std::cout << "�迭 �̸����� �迭�� ��� ���" << arr[0] << "," << arr[1] << "," << arr[2] << std::endl;
	//std::cout << "�����ͷ� �迭�� ��� ���" << pt_arr[0] << "," << pt_arr[1] << "," << pt_arr[2] << std::endl;
	//std::cout << "�����ͷ� �迭�� ��� ���" << *(arr) << "," << *(arr + 1) << "," << *(arr + 2) << std::endl;

	// ��µ� i�� ?
    int i = 1;
	int k = 2;
	int* p1;
	int* p2;
	p1 = &i;
	p2 = &k;
	p1 = p2;
	*p1 = 3; 
	*p2 = 4;
	//�ּ� - ����  
	std::cout << i << std::endl;

}