#include <stdio.h>

#define MAX 10  //定义一个宏常量，值为10
#define STRING "hello world\n" //定义了一个字符串常量

int main()
{
	int i = 0;//定义一个变量，名字为i，值可变
	i = 100;
	i = 5;
	//MAX = 200；常量的值不能修改

	const int a = 20;//定义了一个const常量，值为20
	//a = 1;//常量值不能修改
	const char *str = "hello c";
	//a = 0;常量的值不能修改
	printf(str);
	return 0;
}