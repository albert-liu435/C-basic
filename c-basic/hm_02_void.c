#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//1��void �����ͣ�������ͨ��void����������ԭ���޷���void�����ͱ��������ڴ�
void test21()
{
	//void  a = 10;
}

//2����;�� �޶���������ֵ,�޶���������
void test22(void)
{
	//return 10;
}

//3��void *   ����ָ��  ���ܼ���ָ��,��������ָ�붼��4���ֽ�
void test23()
{
	//printf("size of void* = %d\n", sizeof(void *));
	void * p = NULL;

	int * pInt = NULL;
	char * pChar = NULL;

	pChar = (char *)pInt;

	pChar = p; //����ָ��  ���Բ�ͨ��ǿ������ת����ת����������ָ��

}

int main2() {

	//test22(10);
	test23();


	system("pause");
	return EXIT_SUCCESS;
}