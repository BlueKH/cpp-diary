#include "day4_day3RE.h"
#include <iostream>

int main()
{
	//�ݺ���, for��

	//for( [�ʱ��]; [���ǽ�]; [������] ) {}

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {  //¦���Ǻ� ���ǽ�
			std::cout << "���� i�� " << i << std::endl;
		}
	}

	//[continue] , [break]

	//5�� ��, ���߱�
	for (int i = 0; i < 10; i++) {
		std::cout << "���� i�� " << i << std::endl;
		if (i == 5) {
			break;  //break, ���ϴ� ���� ������ ����.
		}
	}

	//continue
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) continue;  //���ǽĿ� �ش��ϴ� ���� �ѱ�� ���� �ܰ踦 ����. �ش� ���ǿ� �����ϴ� ���� �����ϰ� ���� �ܰ�� �����ϴ� ���̴� -> �����ϰ� ����ϱ�.
		std::cout << "���� i�� " << i << std::endl;
	}

	//2�� for��
	for (int i = 0; i < 10; i++) {
		std::cout << "���� �� : " << i << std::endl;
		for (int j = 0; j < 10; j++) {
			std::cout << i << "x" << j << "=" << i * j << std::endl;
		}
	}

	std::cout << std::endl;

	char n = 'A';

	char name[] = { 'H', 'Y', 'U', 'N' };

	for (int i = 0; i < 4; i++) {
		std::cout << name[i];
	}
	
}