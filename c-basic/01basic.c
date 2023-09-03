#include <stdio.h>

int main001() {

	int a = 100;
	char str[20] = "c.biancheng.net";
	//%#X表示以十六进制形式输出，并附带前缀0X。a 是一个变量，用来存放整数，需要在前面加&来获得它的地址；str 本身就表示字符串的首地址，不需要加&。
	printf("%#X, %#X\n", &a, str);
	return 0;
}