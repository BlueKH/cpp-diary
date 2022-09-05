#include "day4_4.h"
#include <iostream>

int main()
{
	//포인터는 할당하려면, 변수의 자료형과 자료형이 일치해야 한다.
	//이유 - 역참조 시, 자료형이 일치하지 않으면 어떤 자료형으로 해석해야 하는지 판단할 수 없음.

	// * -> 주소는 변수의 데이터 타입과 관계없이 동일한 사이즈이다.
	// * int 4byte. char 1byte, double 8byte

	int p = 10;
	int* pt = &p;  //pt의 주소값을 참조하여 p의 주소를 가리키는것? *은 참조한다는 의미, pt라는 변수에 p의 주소값이 값으로 들어가있어서 pt의 주소를 참조하여 pt의 값인 &p의 주소를 값으로 받는다? pt를 참조하면 p의 주소값을 참조하는 것인데, 그렇다면 *pt는 p의 주소값이아닌 들어있는값?
	//pt는 *과 분리하고 생각해보면, pt자체에는 &p가 들어간다. **p도 마찬가지로 **를 뺴고 p라는 변수에 값이 들어간다.

	char alpha = 'A';
	char* palpha = &alpha;

	double db = 1.23;
	double* pdb = &db;

	std::cout << "int 형 p " << p << std::endl;
	std::cout << "int 형 pt " << pt << std::endl;
	std::cout << "int 형 pt " << sizeof(pt) << std::endl;  //변수의 값과는 별개로 사이즈는 동일.

	std::cout << "char 형 aplha " << alpha << std::endl;
	std::cout << "char 형 palpha " << palpha << std::endl;
	std::cout << "int 형 pt " << sizeof(palpha) << std::endl;
	
	std::cout << "double 형 db " << db << std::endl;
	std::cout << "double 형 pdb " << pdb << std::endl;
	std::cout << "int 형 pt " << sizeof(pdb) << std::endl;
}