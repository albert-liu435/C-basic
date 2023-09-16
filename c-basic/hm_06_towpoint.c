#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void printArray(int ** pArray, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", *pArray[i]);
	}

}

void test61()
{
	//�����ڶ���
	int ** pArray = malloc(sizeof(int *) * 5);

	//��ջ�ϴ���5������
	int a1 = 10;
	int a2 = 20;
	int a3 = 30;
	int a4 = 40;
	int a5 = 50;

	pArray[0] = &a1;
	pArray[1] = &a2;
	pArray[2] = &a3;
	pArray[3] = &a4;
	pArray[4] = &a5;

	//��ӡ����
	printArray(pArray, 5);

	//�ͷŶ�������
	if (pArray != NULL)
	{
		free(pArray);
		pArray = NULL;
	}

}

void freeSpace(int **pArray, int len)
{
	for (int i = 0; i < len; i++)
	{
		free(pArray[i]);
		pArray[i] = NULL;
	}

}

void test62()
{
	//������ջ��
	int * pArray[5];

	for (int i = 0; i < 5; i++)
	{
		//ÿ��index����4���ֽڵĿռ䣬���ڶ������ٿռ�

		pArray[i] = malloc(4);
		//
		*(pArray[i]) = 10 + i;
	}

	printArray(pArray, 5);

	//�ͷŶ���
	freeSpace(pArray, 5);

}

int main6() {

	//test61();
	test62();

	system("pause");
	return EXIT_SUCCESS;
}