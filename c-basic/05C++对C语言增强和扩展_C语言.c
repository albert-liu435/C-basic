#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//1��ȫ�ֱ��������ǿ
int a;
int a = 10;


//2�����������ǿ  ����ֵû�м��  �β�����û�м��   �������ò�������û�м��
getRect5S(w, h)
{

	return w * h;
}
void test51()
{
	printf("%d\n", getRect5S(10, 10, 10));
}


//3������ת�������ǿ
void test52()
{
	char * p = malloc(64);
}


//4��struct��ǿ
struct Person
{
	int age;
	//void func(); C������ �ṹ�岻�����к���
};

void test53()
{
	struct Person p; //�����ṹ�����ʱ�򣬱���ӹؼ���struct
	p.age = 100;
}


//5��bool������չ  C������ û���������
//bool a;


//6����Ŀ�������ǿ
void test54()
{
	//?:
	int a = 10;
	int b = 20;

	printf("ret = %d\n", a > b ? a : b);

	*(a > b ? &a : &b) = 100;  //C������ ���ص���ֵ  20 = 100

	printf("a = %d\n", a);
	printf("b = %d\n", b);

}


//7��const��ǿ
//ȫ��const
const int m_A = 100; // �ܵ������������������޸�ʧ��

void test55()
{
	//m_A = 200;
	//int * p = &m_A;
	//*p = 200;

	//�ֲ�const
	const int m_B = 100; //���䵽ջ��
	//m_B = 200;
	int * p = &m_B;
	*p = 200;

	printf("%d\n", m_B);

	//int arr[m_B]; ��C������ const��α�����������Գ�ʼ������

}



int main0501() {

	//test51();
	test52();
	//test05();


	system("pause");
	return EXIT_SUCCESS;
}