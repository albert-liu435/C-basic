#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//������������
//1����ͬһ��������
//2������������ͬ
//3���������������͡�˳��ͬ

//class Person
//{
//public:
//	void func()   ��Ա���� ������ȫ�ֺ���
//	{
//	}
//};

void func41()
{
	cout << "func41()����" << endl;
}

void func41(int a)
{
	cout << "func41(int a)����" << endl;
}

void func41(double a)
{
	cout << "func41(double a)����" << endl;
}

void func41(int a, double b)
{
	cout << "func41(int a ,double b)����" << endl;
}

void func41(double a, int b)
{
	cout << "func41(double a, int b)����" << endl;
}

//����ֵ�ɲ�������Ϊ�������ص����� �𰸣�������
//int func(int a, double b)
//{
//	cout << "func(int a ,double b)����" << endl;
//}



void test41()
{
	func41(1, 3.14);
}



//���������� ���������汾
//void myFunc(int a)
//{
//	cout << "myfunc(int a )����" << endl;
//}
void myFunc42(int &a) // int & a  = 10;
{
	cout << "myfunc42(int &a )����" << endl;
}
void myFunc42(const int &a) // const int &a = 10;
{
	cout << "myfunc42( const int &a )����" << endl;
}


void test42()
{
	int a = 10;
	//myFunc(a);//��Ҫ��������Գ���

}


//������������Ĭ�ϲ���  ע���������Գ���
void func42(int a, int b = 10)
{

}

void func42(int a)
{

}

void test43()
{
	//func2(10); //���ֶ�����
}


int main04() {
	//test41();
	test42();

	system("pause");
	return EXIT_SUCCESS;
}