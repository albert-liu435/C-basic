#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//按位取反 ~
void test91()
{
	int num = 2;

	// 010 取反
	// 101 源码
	//计算机用补码方式存数据  110 + 1      =  111

	printf("~num = %d\n", ~num); // -3

}

//按位与 &
void test92()
{
	int num = 123;
	if ((num & 1) == 1)
	{
		printf("num为奇数\n");
	}
	else
	{
		printf("num为偶数\n");
	}

}

//按位或 |
void test93()
{
	int num1 = 5;
	int num2 = 3;
	printf("num1 | num2 =  %d\n", num1 | num2); // 7

}

//按位异或  ^
void test94()
{
	int num1 = 5;
	int num2 = 9;

	/*int tmp = num1;
	num1 = num2;
	num2 = tmp;*/

	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;


	//num1 = num1 + num2;
	//num2 = num1 - num2;
	//num1 = num1 - num2;


	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);

}

//左移运算 << 
void test95()
{
	int num = 20;  // 20 * 2 ^ 2;
	printf("%d\n", num <<= 2);
}
//右移运算 >>
void test96()
{
	int num = 20;  // 20 / 2
	printf("%d\n", num >>= 1);
}

int main9() {

	//test91();
	//test92();
	//test93();
	//test94();
	//test95();
	test96();
	system("pause");
	return EXIT_SUCCESS;
}