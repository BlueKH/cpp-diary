#include "hello.h"
#include <iostream>
//�ּ� -> ������ + ������ , �ڵ忡 �������� �ʴ� �Է� ��
//#include -> �����ϴ� , iostream -> ǥ������� ���̺귯��

//using namespace std;

//std -> ǥ�����ø�

//F5 -> ����� ����, ctrl + F5 -> ����� ���� �ʰ� ����

/*int main()
{
	std::cout << "Hello Hyun" << std::endl;  //endl -> end line

	int i;  //����, int -> ����, �Ǽ� - ���� - �ڿ���
	char c;  //����
	float f;  //�Ǽ� -> �Ҽ���
	bool b;  //��-����, true & false

	i = 11;
	// = -> ���� �����ϴ� ��.

	std::cout << i << std::endl;
	
	i = 22;  //���ʿ��� ����, �α� �����.
	i = 21;
	// = -> ���� �����ϴ� ��.

	std::cout << i << std::endl;

	//��ǻ�� -> ������ ���� ������ ��. ���� ���.


	std::cin >> i;  //�Է�
	std::cout << i << std::endl;
	std::cout << std::endl;


	std::cout << "========�ǽ� ����========" << std::endl;
	//������ �� �� �Է� �ް� �� ���� ����غ���

	int k, l;

	std::cin >> k >> l;

	std::cout << k + l << std::endl;

	int result = k + l;

	std::cout << std::endl;
	std::cout << std::endl;


	if (result % 2 == 0)
	{
		std::cout << "¦��" << std::endl;
	}

	if (result % 2 != 0)
	{
		std::cout << "Ȧ��" << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	if (k > l)
	{
		result = k + l;
		std::cout << "k + l �� ���� ~ : " << result << std::endl;
	}
	else if (k < l) {
		result = k - l;
		std::cout << "k - 1 �� ���� ~ : " << result << std::endl;
	}
	else {
		result = k / l;
		std::cout << "k / l �� ���� ~ : " << result << std::endl;
	}
}*/
	//if~else��.

	//if, else if, else(�� �� ������ ���)


	
	//������ �� ��(�� �� �Ҵ���� ���� �ΰ� �ʿ�)
	//�Է��� �� ��
	//��(���� + ����) = ����, �� �Ҵ� ���� ����(�����) �� �ʿ�.
	//����ϱ�.

	//===========================================================================
/*int main()
{
	int inpA, inpB;
	int result;
	std::cout << "������ �� �� �Է� ���ּ���" << std::endl;
	std::cin >> inpA >> inpB;
	
	//1�� �Է� ���� ���ڰ� Ŭ�� ��
	bool big;

	//�� ���� ¦�� �϶�, '¦��'�� ���
	if(inpA > inpB)  // -> ���࿡(����)
	{
		result = inpA + inpB;
		std::cout << "inpA + inpB ���ϱ� ���� ~ : " << result << std::endl;
		big = true; //��
	}

	//�� ���� Ȧ�� �϶�, 'Ȧ��'�� ���
	else if(inpA < inpB)   // -> ���࿡(����)
	{
		result = inpA - inpB;
		std::cout << "inpA - inpB ���� ���� ~ : " << result << std::endl;
	}
	else
	{
	}

	if(big == true)
	{
	std::cout << "A�� B���� ũ��" << std::endl;
	result = inpA + inpB;
	std::cout << "inpA + inpB ���ϱ� ���� ~ :" << result << std::endl;
	}
	else  //(big == false)
	{
		std::cout << "B�� A���� Ŀ�� ��ŵ" << std::endl;
	}
	
	
	result = inpA + inpB;
	std::cout << "���� ~ : " << result << std::endl;
	
	//�� ����, ¦�� �϶�, '¦��'�� ���
	//if() -> ���࿡(����)
	//�� ����, Ȧ�� �϶�, 'Ȧ��'�� ���
	
	if(result % 2 == 0)
	{
		//if���� ������ �����ϸ�, ����Ǵ� ��.
		//¦���� ���.
		std::cout << "¦��" << std::endl;
	}

	if(result % 2 != 0)
	{
		//if���� ������ �����ϸ�, ����Ǵ� ��.
		//Ȧ���� ���.
		std::cout << "Ȧ��" << std::endl;
	}
}
*/


int main()
{
	int inputA, inputB;
	int result;
	int calculate;  //1 -> ����, 2 -> ����, 3 -> ����, 4 -> ������

	std::cout << "������ �� �� �Է� ���ּ���" << std::endl;
	std::cin >> inputA >> inputB;
	std::cout << "1 -> ����, 2 -> ����, 3 -> ����, 4 -> ������ " << std::endl;
	std::cin >> calculate;

	//calculate�� 1�϶�, �� ���� ������
	if (calculate == 1)  //  ==���� ����
	{
		//�� ���� ������
		result = inputA + inputB;
		std::cout << "�ɼ� 1, ���ϱ�" << result << std::endl;
	}

	//calculate�� 2�϶�, �� ���� ����
	else if (calculate == 2)  // ==���� ����
	{
		//�� ���� ����
		result = inputA - inputB;
		std::cout << "�ɼ� 2, ����" << result << std::endl;
	}

	//calculate�� 3�϶�, �� ���� ������
	else if (calculate == 3)  // ==���� ����
	{
		//�� ���� ���ϱ�
		result = inputA * inputB;  //���� 8 �� Ư�� ����
		std::cout << "�ɼ� 3, ���ϱ�" << result << std::endl;
	}

	//calculate�� 4�϶�, �� ���� ������
	else if (calculate == 4)  // ==���� ����
	{
		//�� ���� ������
		result = inputA / inputB;
		std::cout << "�ɼ� 4, ������" << result << std::endl;
	}
}
