#include "day3test1.h"
#include <iostream>

//���� ���� ���� ���� ������ �Ǻ��ؼ� ����Ǵ� �б� ã�ƺ���

//���� ������ 4�� �Է¹ް� 4���� ������ �Ǻ�

//A�б���, ����� ������ 80�� �̻��̸� �հ�
//B�б���, ���а� ���� ��, �ϳ��� 90�� �̻��̸� �հ�
//C�б���, ���� ���� ���� ��� �� 70�� �̻��̸� �հ�
//D�б���, ������ 50�� �̻��̰�, ���а� ���� �� �ϳ� �̻��� 80�� �̻��̸� �հ�
//E�б���, ���� �Ǵ� ��� 60�� �̻��̸� �հ�

//������ �Է��ϸ�, �հݰ����� �б��� ��µǴ� ���α׷�

int main()
{
	int englishP;
	int mathP;
	int koreanP;
	int scienceP;

	std::cout << "���� ���� �Է��ϱ�" << std::endl;
	std::cin >> englishP;
	std::cout << "���� ���� �Է��ϱ�" << std::endl;
	std::cin >> mathP;
	std::cout << "���� ���� �Է��ϱ�" << std::endl;
	std::cin >> koreanP;
	std::cout << "���� ���� �Է��ϱ�" << std::endl;
	std::cin >> scienceP;

	std::cout << "����" << englishP << std::endl;
	std::cout << "����" << mathP << std::endl;
	std::cout << "����" << koreanP << std::endl;
	std::cout << "����" << scienceP << std::endl;

	//A�б�
	if (englishP >= 80 && mathP >= 80) {
		//A�б� ������ �� - true �϶�
		std::cout << "A�б� �հ�" << std::endl;
	}

	//B�б�
	if (mathP >= 90 || koreanP >= 90) {
		//B�б� ������ �� - true �϶�
		std::cout << "B�б� �հ�" << std::endl;
	}

	//C�б�
	if (englishP >= 70 && mathP >= 70 && koreanP >= 70) {
		//C�б� ������ �� - true �϶�
		std::cout << "C�б� �հ�" << std::endl;
	}

	//D�б�
	if (scienceP >= 50 && (mathP >= 80 || englishP >= 80)) {
		//D�б� ������ �� - true �϶�
		std::cout << "D�б� �հ�" << std::endl;
	}

	//E�б�
	if (scienceP >= 60 || englishP >= 60) {
		//E�б� ������ �� - true �϶�
		std::cout << "E�б� �հ�" << std::endl;
	}

}

/*
===�߸� �ۼ��� My Code===
int main()
{
	char school;
	std::cout << "�б����� �Է��Ͻÿ�>> ";
	std::cin >> school;

	int eng, math, kor, sci;
	std::cout << "����, ���� ���� ���� ������ ���ʷ� �Է��Ͻÿ�>> ";
	std::cin >> eng >> math >> kor >> sci;

	if (school == 'A') {
		if (eng >= 80 && math >= 80) {
			std::cout << "�հ��Դϴ�" << std::endl;
		}
		else {
			std::cout << "���հ��Դϴ�" << std::endl;
		}
	}
	else if (school == 'B') {
		if (math >= 90 || kor >= 90) {
			std::cout << "�հ��Դϴ�" << std::endl;
		}
		else {
			std::cout << "���հ��Դϴ�" << std::endl;
		}
	}
	else if (school == 'C') {
		if (eng >= 70 && math >= 70 && kor >= 70) {
			std::cout << "�հ��Դϴ�" << std::endl;
		}
		else {
			std::cout << "���հ��Դϴ�" << std::endl;
		}
	}
	else if (school == 'D') {
		if (sci >= 50 && (math >= 80 || eng >= 80)) {
			std::cout << "�հ��Դϴ�" << std::endl;
		}
		else {
			std::cout << "���հ��Դϴ�" << std::endl;
		}
	}
	else if (school == 'E') {
		if (sci >= 60 || eng >= 60) {
			std::cout << "�հ��Դϴ�" << std::endl;
		}
		else {
			std::cout << "���հ��Դϴ�" << std::endl;
		}
	}
}

===�߸� �ۼ��� My Code===
int main()
{
	int eng, math, kor, sci;
	std::cout << "����, ���� ���� ���� ������ ���ʷ� �Է��Ͻÿ�>> ";
	std::cin >> eng >> math >> kor >> sci;

	if (eng >= 80 && math >= 80) {
		std::cout << "A�б��� �հ�" << std::endl;
	}
	else if (math >= 90 || kor >= 90) {
		std::cout << "B�б��� �հ�" << std::endl;
	}
	else if (eng >= 70 && math >= 70 && kor >= 70) {
		std::cout << "C�б��� �հ�" << std::endl;
	}
	else if (sci >= 50 && (math >= 80 || eng >= 80)) {
		std::cout << "D�б��� �հ�" << std::endl;
	}
	else if (sci >= 60 || eng >= 60) {
		std::cout << "E�б��� �հ�" << std::endl;
	}
	else {
		std::cout << "����" << std::endl;
	}
}
*/