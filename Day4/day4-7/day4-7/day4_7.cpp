#include "day4_7.h"
#include <iostream>

/*
void SwapWrong(int num1, int num2)  //InCorrect
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

=> �ȵǴ� ����.

*/

//main -> ���� ����. '�̸�' '�Լ�'

int main()
{
	int i = 99;
	std::cout << "for�� �ٱ� i " << i << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << "for�� �� i " << i << std::endl;
		if (i == 2) {
			int i = 99;
			std::cout << "i�� " << i << std::endl;
		}
	}
}

/*
void SwapWrong �� main�� ���� �ٸ� ����.
*/