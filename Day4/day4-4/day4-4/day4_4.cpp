#include "day4_4.h"
#include <iostream>

int main()
{
	//�����ʹ� �Ҵ��Ϸ���, ������ �ڷ����� �ڷ����� ��ġ�ؾ� �Ѵ�.
	//���� - ������ ��, �ڷ����� ��ġ���� ������ � �ڷ������� �ؼ��ؾ� �ϴ��� �Ǵ��� �� ����.

	// * -> �ּҴ� ������ ������ Ÿ�԰� ������� ������ �������̴�.
	// * int 4byte. char 1byte, double 8byte

	int p = 10;
	int* pt = &p;  //pt�� �ּҰ��� �����Ͽ� p�� �ּҸ� ����Ű�°�? *�� �����Ѵٴ� �ǹ�, pt��� ������ p�� �ּҰ��� ������ ���־ pt�� �ּҸ� �����Ͽ� pt�� ���� &p�� �ּҸ� ������ �޴´�? pt�� �����ϸ� p�� �ּҰ��� �����ϴ� ���ε�, �׷��ٸ� *pt�� p�� �ּҰ��̾ƴ� ����ִ°�?
	//pt�� *�� �и��ϰ� �����غ���, pt��ü���� &p�� ����. **p�� ���������� **�� ���� p��� ������ ���� ����.

	char alpha = 'A';
	char* palpha = &alpha;

	double db = 1.23;
	double* pdb = &db;

	std::cout << "int �� p " << p << std::endl;
	std::cout << "int �� pt " << pt << std::endl;
	std::cout << "int �� pt " << sizeof(pt) << std::endl;  //������ ������ ������ ������� ����.

	std::cout << "char �� aplha " << alpha << std::endl;
	std::cout << "char �� palpha " << palpha << std::endl;
	std::cout << "int �� pt " << sizeof(palpha) << std::endl;
	
	std::cout << "double �� db " << db << std::endl;
	std::cout << "double �� pdb " << pdb << std::endl;
	std::cout << "int �� pt " << sizeof(pdb) << std::endl;
}