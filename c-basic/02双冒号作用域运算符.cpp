#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
//using namespace std;


int atk = 1000;
void test21()
{
	int atk = 2000;
	std::cout << "atk = " << atk << std::endl;
	// ::����������  ���ǰ��ʲô������� ����ȫ��������
	std::cout << "ȫ�� atk = " << ::atk << std::endl;
}


int main0201() {
	test21();


	system("pause");
	return EXIT_SUCCESS;
}