#include "day3�ǽ�����2.h"
#include <iostream>


/*
1~100, ¦���� ��

int i = 10;
std::cout << " i�� " << i << std::endl;  -> 10

i++; (i + 1) ->
std::cout << " i�� " << i << std::endl;  -> 11

i +=5;
std::cout << " i�� " << i << std::endl; -> 16

i -= 5;
std::cout << "i�� " << i << std::endl; -> 11

i--;
std::cout << "i�� " << i << std::endl; -> 10


¦�� -> if(i % 2 == 0)
*/


int main()
{
	std::cout << "1���� ~ 100���� ¦���� ����? " << std::endl;

	//���� ���� ��� ��, ����
	int sum = 0;

	std::cout << "for�� �� sum�� ����>> " << sum << std::endl;
	for (int i = 1; i < 101; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	std::cout << "for�� �� sum�� ����>> " << sum << std::endl;

	std::cout << "for�� �� sum�� ����>> " << sum << std::endl;
	for (int i = 1; i <= 100; i++) {
		//Ȧ��
		if (i % 2 == 1) continue;  //Ȧ�� �κ� �����ϰ� ����.

		sum += i;
	}
	std::cout << "for�� �� sum�� ����>> " << sum << std::endl;

	std::cout << "for�� �� sum�� ����>> " << sum << std::endl;
	for (int i = 2; i <= 100; i += 2) {
		sum += i;
	}
	std::cout << "for�� �� sum�� ����>> " << sum << std::endl;

}

/*
My Code
int main()
{
	int i;
	int sum = 0;
	for (i = 1; i < 101; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	std::cout << "1~100 ������ ¦������ ��>> " << sum << std::endl;
}
*/