#include "day2RE_Hyun.h"
#include <iostream>


//�������� ����� �Űܺ���
//90�� �̻��� A����Դϴ� ���
//80�� �̻��� B����Դϴ� ���
//70�� �̻��� C����Դϴ� ���
//60�� �̻��� D����Դϴ� ���
//�� ���ϴ�, F����Դϴ�.
//0~100(����)

int main()
{
	int x;  //����
	std::cout << "������ �Է��Ͻÿ�>> ";
	std::cin >> x;

	if (x >= 90) {
		std::cout << "A����Դϴ�" << std::endl;
	}
	else if (x >= 80 && x < 90) {
		std::cout << "B����Դϴ�" << std::endl;

	}
	else if (x >= 70 && x < 80) {
		std::cout << "C����Դϴ�" << std::endl;
	}
	else if (x >= 60 && x < 70) {
		std::cout << "D����Դϴ�" << std::endl;
	}
	else if (x >= 0 && x < 60) {
		std::cout << "F����Դϴ�" << std::endl;
	}
	else {
		std::cout << "���� �����Դϴ�, ���Է� �ʿ�." << std::endl;
	}

}