#include "day1_5.h"
#include <iostream>

//������ �� ��(�� �� �Ҵ���� ���� �ΰ� �ʿ�)
//�Է��� �� ��
//��(���� + ����) = ����, �� �Ҵ� ���� ����(�����) �� �ʿ�.
//����ϱ�.

int main()
{
	int inpA, inpB;
	int result;
	
	std::cout << "������ �� �� �Է��Ͻÿ�>> " << std::endl;
	std::cin >> inpA >> inpB;

	bool big;  //1�� �Է� ���� ���ڰ� Ŭ �� ��. boolean(true, false)

	if (inpA > inpB) {
		result = inpA + inpB;
		std::cout << "��: " << result << std::endl;
		big = true;
	}
	else if (inpA < inpB) {
		result = inpA - inpB;
		std::cout << "��: " << result << std::endl;
		big = false;
	}
	else {
		result = inpA / inpB;
		std::cout << "������: " << result << std::endl;
		big = false;
	}

	if (big == true) {
		std::cout << "A�� B���� ũ��" << std::endl;
		result = inpA + inpB;
		std::cout << "inpA + inpB�� ��>> " << result << std::endl;
	}
	else {
		std::cout << "B�� A���� Ŀ�� ��ŵ" << std::endl;
	}
}