#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main0103() {
	int a = 100, b = 999, temp;
	int *pa = &a, *pb = &b;
	printf("a=%d, b=%d\n", a, b);
	/*****��ʼ����*****/
	temp = *pa;  //��a��ֵ�ȱ�������
	*pa = *pb;  //��b��ֵ����a
	*pb = temp;  //�ٽ�����������a��ֵ����b
	/*****��������*****/
	printf("a=%d, b=%d\n", a, b);
	return 0;
}


int main0102() {
	//*�ڲ�ͬ�ĳ������в�ͬ�����ã�*��������ָ������Ķ����У���������һ��ָ��������Ժ���ͨ�������ֿ���ʹ��ָ�����ʱ��ǰ���*��ʾ��ȡָ��ָ������ݣ�����˵��ʾ����ָ��ָ������ݱ���


	int a = 15, b = 99, c = 222;
	int *p = &a;  //����ָ�����
	//*p ������� a �е����ݣ����ȼ��� a�����Խ������һ�����ݸ�ֵ������Ҳ���Խ�����ֵ�������һ��������
	*p = b;  //ͨ��ָ������޸��ڴ��ϵ�����
	c = *p;  //ͨ��ָ�������ȡ�ڴ��ϵ�����
	printf("%d, %d, %d, %d\n", a, b, c, *p);
	return 0;
}

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

	//ȥ������ֵ��Ҳ��ָ��Ľ�����
	//printf("a = %d\n", a);
	printf("*p = %d\n", *p);

	//printf("sizeof(int *) = %u\n", sizeof(int *));
	//printf("sizeof(short *) = %u\n", sizeof(short *));
	//printf("sizeof(char *) = %u\n", sizeof(char *));
	//printf("sizeof(long *) = %u\n", sizeof(long *));
	//printf("sizeof(double *) = %u\n", sizeof(double *));

	//printf("sizeof(void *) = %u\n", sizeof(void *));



	system("pause");
	return EXIT_SUCCESS;
}


