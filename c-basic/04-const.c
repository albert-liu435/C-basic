#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



// 修饰变量
int main0401(void)
{
	const int a = 20;

	int *p = &a;

	*p = 650;

	printf("%d\n", a);

	system("pause");
	return EXIT_SUCCESS;
}

// const int *p;
int main0402(void)
{
	int a = 10;
	int b = 30;
	//指向常量的指针
	//修饰*，指针指向内存区域不能修改，指针指向可以变
	const int *p = &a;

	//*p = 500;
	p = &b;

	system("pause");
	return EXIT_SUCCESS;
}

//  int const *p;
int main0403(void)
{
	int a = 10;
	int b = 30;
	//指针常量
	//修饰p1，指针指向不能变，指针指向的内存可以修改
	int const *p = &a;

	//*p = 300;
	p = &b;

	system("pause");
	return EXIT_SUCCESS;
}


//  int * const p;
int main0405(void)
{
	int a = 10;
	int b = 30;
	int * const p = &a;

	*p = 300;
	//p = &b;

	printf("a = %d\n", *p);
	printf("a = %d\n", a);

	system("pause");
	return EXIT_SUCCESS;
}

// const int * const p;
int main0406(void)
{
	int a = 10;
	int b = 30;
	const int * const p = &a;

	//*p = 300;
	//p = &b;

	printf("a = %d\n", *p);
	printf("a = %d\n", a);

	system("pause");
	return EXIT_SUCCESS;
}