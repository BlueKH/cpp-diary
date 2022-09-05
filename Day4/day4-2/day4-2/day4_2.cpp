#include "day4_2.h"
#include <iostream>

int main()
{
	//비교 - Compare
	std::string letter1 = "ABC";
	std::string letter2 = "ABCDE";

	if (letter1.compare(letter2) == 0) {
		std::cout << "둘의 문자가 같다";
	}
	else if (letter1.compare(letter2) < 0) {
		std::cout << "< 0";
		std::cout << letter1 << " " << letter2 << std::endl;
	}
	else {
		std::cout << "> 0";
		std::cout << letter1 << " " << letter2 << std::endl;
	}
}