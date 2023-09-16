#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void mySort(int arr[], int len)
{

	for (int i = 0; i < len; i++)
	{
		int min = i; //��¼��Сֵ���±�Ϊi
		for (int j = i + 1; j < len; j++)
		{
			if (arr[min] > arr[j])
			{
				//������ʵ��Сֵ�±�
				min = j;
			}
		}
		//�ж���ʵ��Сֵ�±� �Ƿ��뿪ʼ�϶���i��ȣ�������ȣ�����Ԫ��
		if (i != min)
		{
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}

}

void printArray4(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}

void test41()
{
	//��С���� ���� ����ѡ������
	int arr[] = { 2, 5, 1, 3, 4 };

	int len = sizeof(arr) / sizeof(int);
	mySort(arr, len);

	printArray4(arr, len);

}

//void selectSort(char ** pArr, int len)
void selectSort(char * pArr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			//if (pArr[max] < pArr[j])
			if (strcmp(pArr[max], pArr[j]) == -1)
			{
				max = j;
			}
		}
		if (i != max)
		{
			char * tmp = pArr[i];
			pArr[i] = pArr[max];
			pArr[max] = tmp;
		}
	}

}

void printArray42(char ** pArr, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%s\n", pArr[i]);
	}
}

void test42()
{
	//��ָ�������������������㷨���� ѡ������   �Ӵ�С
	char * pArray[] = { "aaa", "fff", "bbb", "ddd", "ccc", "eee" };

	int len = sizeof(pArray) / sizeof(char*);
	selectSort(pArray, len);

	printArray42(pArray, len);
}

int main4() {
	//test41();
	test42();

	system("pause");
	return EXIT_SUCCESS;
}