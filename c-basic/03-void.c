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
	//p = (void *)&a; //指向变量时，最好转换为void *

	////使用指针变量指向的内存时，转换为int *
	//*((int *)p) = 11;
	//printf("a = %d\n", a);



	int a = 345;

	char ch = 'R';
	//void *指针可以指向任意变量的内存空间
	void *p;  // 万能指针、泛型指针
	//p = &a;
	p = &ch;

	printf("%c\n", *(char *)p);


	system("pause");
	return EXIT_SUCCESS;
}
