#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main0101(void)
{


	int c = 0;
	char d = 100;
	//ȡ�������ڴ��еĵ�ַ
	printf("%p, %p\n", &c, &d); //��ӡa, b�ĵ�ַ


		//int *������һ���������ͣ�int*ָ�����ͣ�p���Ǳ�����
	//������һ��ָ�����͵ı���������ָ��һ��int���ͱ����ĵ�ַ
	//int *p;
	//p = &a;//��a�ĵ�ַ��ֵ������p��pҲ��һ��������ֵ��һ���ڴ��ַ���
	//printf("%d\n", *p);//pָ����a�ĵ�ַ��*p����a��ֵ

	//char *p1 = &b;
	//printf("%c\n", *p1);//*p1ָ����b�ĵ�ַ��*p1����b��ֵ


	int a = 10;
	//����һ��ָ���������ָ�����a�ĵ�ַ
	int *p = &a;

	//*p = 2000;
	a = 350;

	//printf("a = %d\n", a);
	printf("*p = %d\n", *p);

	printf("sizeof(int *) = %u\n", sizeof(int *));
	printf("sizeof(short *) = %u\n", sizeof(short *));
	printf("sizeof(char *) = %u\n", sizeof(char *));
	printf("sizeof(long *) = %u\n", sizeof(long *));
	printf("sizeof(double *) = %u\n", sizeof(double *));

	printf("sizeof(void *) = %u\n", sizeof(void *));



	system("pause");
	return EXIT_SUCCESS;
}


