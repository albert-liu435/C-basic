#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test81()
{
	//字符串结束标志位 \0
	char str1[] = { 'h', 'e', 'l', 'l', 'o' ,'\0'};
	printf("%s\n", str1);


	//char str2[100] = { 'h', 'e', 'l', 'l', 'o' };
	//printf("%s\n", str2);


	//char str3[] = "hello";
	//printf("%s\n", str3);
	//printf("sizeof str:%d\n", sizeof(str3)); //6
	//printf("strlen str:%d\n", strlen(str3)); //5


	//char str4[100] = "hello";
	//printf("sizeof str:%d\n", sizeof(str4));
	//printf("strlen str:%d\n", strlen(str4));


	//char str5[] = "hello\0world";
	//printf("%s\n", str5);
	//printf("sizeof str5:%d\n", sizeof(str5)); //12
	//printf("strlen str5:%d\n", strlen(str5)); //5


	//char str6[] = "hello\012world";
	//printf("%s\n", str6);
	//printf("sizeof str6:%d\n", sizeof(str6)); //12
	//printf("strlen str6:%d\n", strlen(str6)); //11

}


//字符串拷贝实现
//1、利用[] 实现
void copyString81(char * dest, char * src)
{
	int len = strlen(src);
	for (int i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
}

//2、利用字符串指针
void copyString82(char * dest, char * src)
{
	while (*src != '\0')
	{
		*dest = *src;

		dest++;
		src++;
	}
	*dest = '\0';
}

//3
void copyString83(char * dest, char * src)
{
	while (*dest++ = *src++) {}
}

void test82()
{
	char * str = "hello world";

	char buf[1024];

	//copyString81(buf, str);
	//copyString82(buf, str);
	copyString83(buf, str);
	printf("%s\n", buf);
}


//字符串翻转
void reverseString81(char * str)
{
	//利用[]
	int len = strlen(str);
	int start = 0;
	int end = len - 1;

	while (start < end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}

}

void reverseString82(char * str)
{
	int len = strlen(str);
	char * start = str;
	char * end = str + len - 1;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

void test83()
{
	char str[] = "abcdefg";

	//reverseString81(str);
	reverseString82(str);
	printf("%s\n", str);
}

int main8() {

	test81();
	//test82();
	//test83();

	system("pause");
	return EXIT_SUCCESS;
}