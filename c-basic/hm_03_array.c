#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test31()
{
	//�ɶ��Ը�
	int arr[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	/*int arr2[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int arr3[][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };*/


	//����������������� ����ά���������� ָ���һ��һά����  ����ָ��
	//�������1  sizeof
	//�������2  ��������ȡ��ַ &arr  ��ȡ���Ƕ�ά����� ����ָ�� int(*p)[3][3] = &arr;
	//printf("%d\n", sizeof(arr));

	int(*pArray)[3] = arr;

	//���ʶ�ά�����е� 6 ���Ԫ��
	printf("%d\n", arr[1][2]);  //���˿�
	printf("%d\n", *(*(pArray + 1) + 2)); //��������

}


//void printArray(int (*array)[3], int row, int col)
//void printArray(int array[][3], int row ,int col)
void printArray3(int array[3][3], int row, int col) //array[3][3] �ȼ��� һά����ָ��   int (*array)[3]
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			//printf("%d ", array[i][j]);
			printf("%d ", *(*(array + i) + j));
		}
		printf("\n");
	}
}

//��ά��������������
void test32()
{
	int arr[3][3] = {
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }
	};

	printArray3(arr, 3, 3);

}

int main3() {

	test31();
	//test32();
	system("pause");
	return EXIT_SUCCESS;
}