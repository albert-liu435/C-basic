#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main0301(void)
{

	//void *p = NULL;

	//int a = 10;
	//p = (void *)&a; //ָ�����ʱ�����ת��Ϊvoid *

	////ʹ��ָ�����ָ����ڴ�ʱ��ת��Ϊint *
	//*((int *)p) = 11;
	//printf("a = %d\n", a);



	int a = 345;

	char ch = 'R';
	//void *ָ�����ָ������������ڴ�ռ�
	void *p;  // ����ָ�롢����ָ��
	//p = &a;
	p = &ch;

	printf("%c\n", *(char *)p);


	system("pause");
	return EXIT_SUCCESS;
}
