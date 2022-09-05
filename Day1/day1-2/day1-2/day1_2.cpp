#include "day1_2.h"
#include <iostream>

int main()
{
	int inputA, inputB;
	int result;
	int calculate;  // 1¹ø µ¡¼À, 2¹ø »¬¼À, 3¹ø °ö¼À, 4¹ø ³ª´°¼À

	std::cout << "Á¤¼ö¸¦ µÎ ¹ø ÀÔ·ÂÇÏ¶ó>> " << std::endl;
	std::cin >> inputA >> inputB;
	std::cout << "1 -> µ¡¼À, 2 -> »¬¼À, 3 -> °ö¼À, 4 -> ³ª´°¼À" << std::endl;
	std::cin >> calculate;

	//calculate°¡  1ÀÏ ¶§, µÎ ¼öÀÇ ÇÕ
	if (calculate == 1) {
		result = inputA + inputB;
		std::cout << "¿É¼Ç 1, ÇÕ>> " << result << std::endl;
	}

	//calculate°¡ 2ÀÏ ¶§, µÎ ¼öÀÇ Â÷
	if (calculate == 2) {
		result = inputA - inputB;
		std::cout << "¿É¼Ç 2, Â÷>> " << result << std::endl;
	}

	//calculate°¡ 3ÀÏ ¶§, µÎ ¼öÀÇ °ö
	if (calculate == 3) {
		result = inputA * inputB;
		std::cout << "¿É¼Ç 3, °ö>> " << result << std::endl;
	}

	//calculate°¡ 4ÀÏ ¶§, µÎ ¼öÀÇ ³ª´°¼À
	if (calculate) {
		result = inputA / inputB;
		std::cout << "¿É¼Ç 4, ³ª´©±â>> " << result << std::endl;
	}
}
