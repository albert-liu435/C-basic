#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//ָ�������������������������

//�������ԣ� �������������ڴ棬��������ʹ��
void func7(char * p)
{
	strcpy(p, "hello world");
}

void test71()
{
	//��test71�з������ڴ棬������ջ��
	char buf[1024] = { 0 };

	func7(buf);

	printf("%s\n", buf);

}

void printString(char * str)
{
	printf("%s\n", str + 6);

}

void test72()
{
	char * p = malloc(sizeof(char) * 64);
	memset(p, 0, 64);
	strcpy(p, "hello world");
	printString(p);

	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
}


//������ԣ��ڱ��������з����ڴ棬��������ʹ��
void allocateSpace(char ** pp)
{
	char * str = malloc(sizeof(char) * 64);
	memset(str, 0, 64);
	strcpy(str, "helloworld");

	*pp = str;
}
void test73()
{
	char * p = NULL;

	allocateSpace(&p);

	printf("%s\n", p);

}

int main7() {

	test71();
	//test72();
	//test73();
	system("pause");
	return EXIT_SUCCESS;
}