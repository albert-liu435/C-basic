#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

namespace KingGlory
{
	int sunwukongId = 1;
}

namespace LOL
{
	int sunwukongId = 3;
}

void test41()
{
	int sunwukongId = 2;

	//1��using����
	//using KingGlory::sunwukongId ;  

	//��using������ �ͽ�ԭ��ͬʱ���֣�������������
	cout << sunwukongId << endl;

}


void test42()
{
	//int sunwukongId = 2;
	//2��using����ָ��
	using namespace KingGlory;
	using namespace LOL;

	//��using����ָ��  ��  �ͽ�ԭ��ͬʱ���֣�����ʹ�þͽ�
	//��using����ָ���ж������Ҫ�������� ����
	cout << KingGlory::sunwukongId << endl;
	cout << LOL::sunwukongId << endl;
}

int main0401() {

	///test41();
	test42();
	system("pause");
	return EXIT_SUCCESS;
}