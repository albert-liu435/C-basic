#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void allocateSpace7(int ** p)
{	
	//在堆上开辟空间
	int *  temp = malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
	{
		temp[i] = 100 + i;
	}
	//
	*p = temp;

}

void printArray7(int ** pArray, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", (*pArray)[i]);
	}
}

void freeSpace7(int ** pArray)
{
	if (*pArray != NULL)
	{
		free(*pArray);
		*pArray = NULL;
	}
}

void test71()
{
	//定义一个指针变量
	int * p = NULL;
	allocateSpace7(&p);

	printArray7(&p, 5);

	freeSpace7(&p, 5);

	if (p == NULL)
	{
		printf("空指针\n");
	}
	else
	{
		printf("野指针\n");
	}
}

int main7() {
	test71();


	system("pause");
	return EXIT_SUCCESS;
}