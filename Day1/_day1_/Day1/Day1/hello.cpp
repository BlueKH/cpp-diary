#include "hello.h"
#include <iostream>
//주석 -> 슬래쉬 + 슬래쉬 , 코드에 관여하지 않는 입력 줄
//#include -> 포함하다 , iostream -> 표준입출력 라이브러리

//using namespace std;

//std -> 표준템플릿

//F5 -> 디버깅 시작, ctrl + F5 -> 디버그 하지 않고 시작

/*int main()
{
	std::cout << "Hello Hyun" << std::endl;  //endl -> end line

	int i;  //정수, int -> 정수, 실수 - 정수 - 자연수
	char c;  //문자
	float f;  //실수 -> 소수점
	bool b;  //참-거짓, true & false

	i = 11;
	// = -> 값을 대입하는 것.

	std::cout << i << std::endl;
	
	i = 22;  //불필요한 연산, 로그 기록형.
	i = 21;
	// = -> 값을 대입하는 것.

	std::cout << i << std::endl;

	//컴퓨터 -> 마지막 값이 데이터 값. 스택 기반.


	std::cin >> i;  //입력
	std::cout << i << std::endl;
	std::cout << std::endl;


	std::cout << "========실습 예제========" << std::endl;
	//정수를 두 번 입력 받고 그 합을 출력해보자

	int k, l;

	std::cin >> k >> l;

	std::cout << k + l << std::endl;

	int result = k + l;

	std::cout << std::endl;
	std::cout << std::endl;


	if (result % 2 == 0)
	{
		std::cout << "짝수" << std::endl;
	}

	if (result % 2 != 0)
	{
		std::cout << "홀수" << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	if (k > l)
	{
		result = k + l;
		std::cout << "k + l 의 답은 ~ : " << result << std::endl;
	}
	else if (k < l) {
		result = k - l;
		std::cout << "k - 1 의 답은 ~ : " << result << std::endl;
	}
	else {
		result = k / l;
		std::cout << "k / l 의 답은 ~ : " << result << std::endl;
	}
}*/
	//if~else문.

	//if, else if, else(그 외 나머지 모두)


	
	//정수를 두 번(두 번 할당받을 값이 두개 필요)
	//입력이 두 번
	//합(정수 + 정수) = 정수, 합 할당 받을 정수(결과값) 이 필요.
	//출력하기.

	//===========================================================================
/*int main()
{
	int inpA, inpB;
	int result;
	std::cout << "정수를 두 번 입력 해주세요" << std::endl;
	std::cin >> inpA >> inpB;
	
	//1차 입력 받은 숫자가 클때 참
	bool big;

	//그 합이 짝수 일때, '짝수'를 출력
	if(inpA > inpB)  // -> 만약에(조건)
	{
		result = inpA + inpB;
		std::cout << "inpA + inpB 더하기 답은 ~ : " << result << std::endl;
		big = true; //참
	}

	//그 합이 홀수 일때, '홀수'를 출력
	else if(inpA < inpB)   // -> 만약에(조건)
	{
		result = inpA - inpB;
		std::cout << "inpA - inpB 빼기 답은 ~ : " << result << std::endl;
	}
	else
	{
	}

	if(big == true)
	{
	std::cout << "A가 B보다 크다" << std::endl;
	result = inpA + inpB;
	std::cout << "inpA + inpB 더하기 답은 ~ :" << result << std::endl;
	}
	else  //(big == false)
	{
		std::cout << "B가 A보다 커서 스킵" << std::endl;
	}
	
	
	result = inpA + inpB;
	std::cout << "답은 ~ : " << result << std::endl;
	
	//그 합이, 짝수 일때, '짝수'를 출력
	//if() -> 만약에(조건)
	//그 합이, 홀수 일때, '홀수'를 출력
	
	if(result % 2 == 0)
	{
		//if문의 조건이 부합하면, 실행되는 곳.
		//짝수를 출력.
		std::cout << "짝수" << std::endl;
	}

	if(result % 2 != 0)
	{
		//if문의 조건이 부합하면, 실행되는 곳.
		//홀수를 출력.
		std::cout << "홀수" << std::endl;
	}
}
*/


int main()
{
	int inputA, inputB;
	int result;
	int calculate;  //1 -> 덧셈, 2 -> 뺄셈, 3 -> 곱셈, 4 -> 나눗셈

	std::cout << "정수를 두 번 입력 해주세요" << std::endl;
	std::cin >> inputA >> inputB;
	std::cout << "1 -> 덧셈, 2 -> 뺄셈, 3 -> 곱셈, 4 -> 나눗셈 " << std::endl;
	std::cin >> calculate;

	//calculate가 1일때, 두 수를 더하자
	if (calculate == 1)  //  ==값이 같다
	{
		//두 수를 더하자
		result = inputA + inputB;
		std::cout << "옵션 1, 더하기" << result << std::endl;
	}

	//calculate가 2일때, 두 수를 빼자
	else if (calculate == 2)  // ==값이 같다
	{
		//두 수를 빼자
		result = inputA - inputB;
		std::cout << "옵션 2, 뺄셈" << result << std::endl;
	}

	//calculate가 3일때, 두 수를 곱하자
	else if (calculate == 3)  // ==값이 같다
	{
		//두 수를 곱하기
		result = inputA * inputB;  //숫자 8 위 특수 문자
		std::cout << "옵션 3, 곱하기" << result << std::endl;
	}

	//calculate가 4일때, 두 수를 나누자
	else if (calculate == 4)  // ==값이 같다
	{
		//두 수를 나누자
		result = inputA / inputB;
		std::cout << "옵션 4, 나누셈" << result << std::endl;
	}
}
