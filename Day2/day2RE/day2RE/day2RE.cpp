#include "day2RE.h"
#include <iostream>
/*����
if (���ǽ� 1)
{
	���ǽ� 1�� ��(true)�� ��, ����Ǵ� ��
}
else if (���ǽ� 2) {
	���ǽ� 2�� ��(true)�� ��, ����Ǵ� ��
}
else {
	���ǽ��� ��� ����(false)�� ��, ����Ǵ� ��
		-> ���ǽ� 1, 2 �� �� ���� �ƴ� ��.
}
*/

//�������� ����� �Űܺ���
//90�� �̻��� A����Դϴ� ���
//80�� �̻��� B����Դϴ� ���
//70�� �̻��� C����Դϴ� ���
//60�� �̻��� D����Դϴ� ���
//�� ���ϴ�, F����Դϴ�.
//0~100(����)

int main()
{
	int score;
	score = 66;

	// > �ʰ�, < �̸�, >= �̻�, <= ����

	if (score >= 90) {
		std::cout << "A����Դϴ�" << std::endl;
	}
	else if (score >= 80) {
		std::cout << "B����Դϴ�" << std::endl;
	}
	else if (score >= 70) {
		std::cout << "C����Դϴ�" << std::endl;
	}
	else if (score >= 60) {
		std::cout << "D����Դϴ�" << std::endl;
	}
	else {
		std::cout << "F����Դϴ�" << std::endl;
	}
}