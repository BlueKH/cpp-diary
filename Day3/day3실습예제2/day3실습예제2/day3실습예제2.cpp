#include "day3실습예제2.h"
#include <iostream>


/*
1~100, 짝수의 합

int i = 10;
std::cout << " i는 " << i << std::endl;  -> 10

i++; (i + 1) ->
std::cout << " i는 " << i << std::endl;  -> 11

i +=5;
std::cout << " i는 " << i << std::endl; -> 16

i -= 5;
std::cout << "i는 " << i << std::endl; -> 11

i--;
std::cout << "i는 " << i << std::endl; -> 10


짝수 -> if(i % 2 == 0)
*/


int main()
{
	std::cout << "1부터 ~ 100까지 짝수의 합은? " << std::endl;

	//합을 받을 결과 값, 정수
	int sum = 0;

	std::cout << "for문 전 sum의 값은>> " << sum << std::endl;
	for (int i = 1; i < 101; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	std::cout << "for문 후 sum의 값은>> " << sum << std::endl;

	std::cout << "for문 전 sum의 값은>> " << sum << std::endl;
	for (int i = 1; i <= 100; i++) {
		//홀수
		if (i % 2 == 1) continue;  //홀수 부분 무시하고 진행.

		sum += i;
	}
	std::cout << "for문 후 sum의 값은>> " << sum << std::endl;

	std::cout << "for문 전 sum의 값은>> " << sum << std::endl;
	for (int i = 2; i <= 100; i += 2) {
		sum += i;
	}
	std::cout << "for문 후 sum의 값은>> " << sum << std::endl;

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
	std::cout << "1~100 사이의 짝수들의 합>> " << sum << std::endl;
}
*/