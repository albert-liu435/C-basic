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
	//取变量在内存中的地址
	printf("%p, %p\n", &c, &d); //打印a, b的地址


		//int *代表是一种数据类型，int*指针类型，p才是变量名
	//定义了一个指针类型的变量，可以指向一个int类型变量的地址
	//int *p;
	//p = &a;//将a的地址赋值给变量p，p也是一个变量，值是一个内存地址编号
	//printf("%d\n", *p);//p指向了a的地址，*p就是a的值

	//char *p1 = &b;
	//printf("%c\n", *p1);//*p1指向了b的地址，*p1就是b的值


	int a = 10;
	//定义一个指针变量，并指向变量a的地址
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


