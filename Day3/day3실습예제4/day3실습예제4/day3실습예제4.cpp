#include "day3�ǽ�����4.h"
#include <iostream>

//�ǽ�����
//�̸��� �����Դϱ�? (���)
//�ڱ��̸� �Է�(����)
//��� ��ʴϱ�?
//�Է� -> ���ͺ� ��������
//���� �����Դϱ�?
//�Է� -> ���ͺ� ���� ����
//(��°�)�� ��� (�̸�) �Դϴ�, ���� (��) �ϰ� �ͽ��ϴ� -> ���

int main()
{
	char name[100];
	char home[100];
	char dream[100];

	std::cout << "�̸��� �����Դϱ�?" << std::endl;
	std::cin >> name;
	std::cout << "��� ��ʴϱ�?" << std::endl;
	std::cin >> home;
	std::cout << "���� �����Դϱ�?" << std::endl;
	std::cin >> dream;

	std::cout << home << "�� ��� " << name << "�Դϴ�, ���� " << dream << " �ϰ� �ͽ��ϴ�." << std::endl;
}