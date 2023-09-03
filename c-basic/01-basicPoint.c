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
	/*****开始交换*****/
	temp = *pa;  //将a的值先保存起来
	*pa = *pb;  //将b的值交给a
	*pb = temp;  //再将保存起来的a的值交给b
	/*****结束交换*****/
	printf("a=%d, b=%d\n", a, b);
	return 0;
}


int main0102() {
	//*在不同的场景下有不同的作用：*可以用在指针变量的定义中，表明这是一个指针变量，以和普通变量区分开；使用指针变量时在前面加*表示获取指针指向的数据，或者说表示的是指针指向的数据本身。


	int a = 15, b = 99, c = 222;
	int *p = &a;  //定义指针变量
	//*p 代表的是 a 中的数据，它等价于 a，可以将另外的一份数据赋值给它，也可以将它赋值给另外的一个变量。
	*p = b;  //通过指针变量修改内存上的数据
	c = *p;  //通过指针变量获取内存上的数据
	printf("%d, %d, %d, %d\n", a, b, c, *p);
	return 0;
}

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

	//去变量的值，也叫指针的解引用
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


