#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//1��const���εı��� 
//ȫ�ֱ���
const int a = 10; //������ ,����޸� �﷨ͨ��������ʧ�ܣ�ԭ���ܵ��������ı���
void test81()
{
	//a = 100;

	int * p = &a;
	*p = 100;
	printf("%d\n", a);

}

void test82()
{
	const int b = 10; //�����ջ�ϣ�ͨ������޸��ǿ��Գɹ���

	//b = 20;

	int * p = &b;
	*p = 20;
	printf("%d\n", b);

	//��C������ const���εľֲ�����  ��Ϊα����,�����Գ�ʼ������
	//int arr[b];
}


//2���ַ�������

void test83()
{
	char * p1 = "hello world";
	char * p2 = "hello world";
	char * p3 = "hello world";
	printf("%d\n", &"hello world");
	printf("%d\n", p1);
	printf("%d\n", p2);
	printf("%d\n", p3);
}

void test84()
{
	char * str = "hello world";
	str[0] = 'x';

}

int main() {
	test81();
	//test82();
	//test83();
	//test84();
	system("pause");
	return EXIT_SUCCESS;
}