#include "day4_1.h"
#include <iostream>

int main()
{
	//string
	std::string letter = "H Y U N";

	std::cout << letter << std::endl;

	std::cout << "���ڿ� letter�� ����(length)�� = " << letter.length() << std::endl;  //�Լ����� �Ұ�ȣ() �ۼ� �ʿ�.
	std::cout << "���ڿ� letter�� ũ��(size)�� = " << letter.size() << std::endl;  //size�� ������ ũ��. ���ڿ� ���̴� length.

	//append -> �����̴�, ÷���ϴ�
	letter.append("congratulation");
	std::cout << letter << std::endl;

	//�˻��� ��ǻ�Ϳ��� ��Ű�� ���� �����ؾ� ��
	std::cout << letter.find("N") << std::endl;  //find()�� ���� �˻��ع����� ������ ������� �ʴ� ���� ����.
}