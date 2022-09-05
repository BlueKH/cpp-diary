#include "day4test3.h"
#include <iostream>

//출력될 i는?
/*
int i = 1;
int k = 2;
int* p1;
int*p2;
p1 = &i;
p2 = &k;
p1 = p2;
*p1 = 3;
*p2 = 4;

std::cout << i << std::endl;
*/

int main()
{
	int i = 1;
	int k = 2;
	int* p1;
	int* p2;
	p1 = &i;
	p2 = &k;
	p1 = p2;
	*p1 = 3;
	*p2 = 4;

	std::cout << i << std::endl;
	std::cout << k << std::endl;
}