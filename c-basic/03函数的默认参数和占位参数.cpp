#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//Ĭ�ϲ��� �﷨  �β�  ���� ����  = Ĭ��ֵ
//ע������ �������һ��λ������Ĭ�ϲ�������ô�����λ���𣬴����Ҷ�������Ĭ��ֵ
int func(int a, int b = 10, int c = 10)
{
	return  a + b + c;
}


void test31()
{
	cout << func(20, 5) << endl;

}


//������������ʵ�� ֻ����һ�� �ṩĬ�ϲ�����������ͬʱ��Ĭ�ϲ���
void myFunc(int a = 10, int b = 10);
void myFunc(int a, int b) {};



//ռλ����  ֻдһ�����ͽ���ռλ������ʱ�����Ҫ����ռλֵ
//ռλ���� ��;�� Ŀǰû��
void func2(int a, int = 1)
{

}

void test32()
{
	func2(10);
}

int main03() {

	//test31();
	test32();
	system("pause");
	return EXIT_SUCCESS;
}