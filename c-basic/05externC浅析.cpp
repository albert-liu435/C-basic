#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "test.h"


//���߱�����  show������C���Է�ʽ ������
//extern "C" void show();




void test51()
{
	show();//_Z4showv;��C++���к������ػ����κ�����������show��c�����ļ����������ʧ��
}



int main05() {
	test51();


	system("pause");
	return EXIT_SUCCESS;
}