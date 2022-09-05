#include "day2실습1Hyun.h"
#include <iostream>

//실습
//number 1 ~ 3
//각각 세번 입력받고, 입력받은 값으로 변환하기
// * 출력
//조건
//입력받는 함수(함수 1개만 만들기)
//출력받는 함수(함수 1개만 만들기)

using namespace std;

int a, b, c;

void Input() {
	cout << "정수 3개를 입력하시오>> " << endl;
	cin >> a >> b >> c;
}

void Output() {
	cout << "입력받은 정수 3개의 값>> " << a << " " << b << " " << c << endl;
}

int main()
{
	a = 0;
	b = 0;
	c = 0;

	Output();

	Input();
	Output();
	Input();
	Output();
	Input();
	Output();
}