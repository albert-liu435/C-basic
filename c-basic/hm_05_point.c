#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <stddef.h> //offsetof��ͷ�ļ�

//1��ָ��Ĳ������� ָ��+1֮����Ծ���ֽ���
void test51()
{
	char * p = NULL;
	printf("%d\n", p);
	printf("%d\n", p + 1);


	double * p2 = NULL;
	printf("%d\n", p2);
	printf("%d\n", p2 + 1);

}

//2�������õ�ʱ�򣬽�����ֽ�����
void test52()
{
	char buf[1024] = { 0 };

	int a = 1000;

	memcpy(buf + 1, &a, sizeof(int));

	char * p = buf;
	printf("%d\n", *(int *)(p + 1));

}

//������ϰ���Զ�������������ϰ
struct Person
{
	char a;     // 0 ~ 3
	int b;      // 4 ~ 7
	char buf[64]; // 8 ~ 71
	int d;     // 72 ~ 75
};

void test53()
{
	struct Person p = { 'a', 10, "hello world", 20 };

	printf("d���Ե�ƫ������ %d\n", offsetof(struct Person, d));

	printf("d���Ե�ֵΪ��%d\n", *(int *)((char *)&p + offsetof(struct Person, d)));
}

int main5() {
	//test51();
	test52();
	//test53();
	system("pause");
	return EXIT_SUCCESS;
}