#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//1��ջ����������
void test31()
{
	int a = 10;  //ջ��  �ߵ�ַ
	int b = 10;
	int c = 10;
	int d = 10;  //ջ��  �͵�ַ


	printf("%d\n", &a);
	printf("%d\n", &b);
	printf("%d\n", &c);
	printf("%d\n", &d);

}


//2���ڴ��ŷ���
void test32()
{
	int a = 0x11223344;

	char * p = &a;

	printf("%x\n", *p);    //44  ��λ�ֽ�����  �͵�ַ
	printf("%x\n", *(p + 1)); //33  ��λ�ֽ�����  �ߵ�ַ
}

int main3() {


	//test31();
	test32();
	system("pause");
	return EXIT_SUCCESS;
}