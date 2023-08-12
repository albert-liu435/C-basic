#include <stdio.h>

int main01()
{
	//一个好的习惯就是定义一个变量的时候，要将变量值初始化
	int a = 0;
	int b = 0;

	char s[5] = { 0 };
	s[0] = 'a';
	s[1] = 'b';
	s[2] = 'c';
	s[3] = 'd';
	//s[4] = 'e';
	printf("%s\n", s);

	//s = "abcd"
	//s[5] = 6;
	//s[6] = 10;
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", s[i]);
	}

	//char ayyay[2][3][4] = { { { 3, 4, 5, 6 }, { 7, 8, 9, 0 }, {} }, { {}, {}, {} } };
	//原则，数组维数越多，代码的可读性就越差，所以要尽可能的用维数少的数组

	char array[] = "hello\n";//如果定义一个字符串数组的时候，没有写数组的维数，那么C语言编译器会自动根据字符串的长度自动填写
	char array1[3] = "hello\n";
	printf("%s\n", array1);
	return 0;
}