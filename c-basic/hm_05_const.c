#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Person
{
	char name[64]; // 0 ~ 63
	int age; // 64 ~ 67
	int Id;  // 68 ~ 71
	double score; // 72 ~79
};

//��struct Person p ��Ϊ struct Person * p  ��ʡ��Դ
//constʹ��  �����β� ��ֹ�����
void showPerson(const struct Person *p)
{
	//p.age = 100;
	//p->age = 100;
	//printf("������ %s  ���䣺 %d  ѧ�� %d  ���� %f\n", p.name, p.age, p.Id, p.score);
	printf("������ %s  ���䣺 %d  ѧ�� %d  ���� %f\n", p->name, p->age, p->Id, p->score);
}

void test51()
{
	struct Person p = { "Tom", 18, 1, 60 };
	printf("%d\n", sizeof(p));
	showPerson(&p);

}

int main5() {

	test51();

	system("pause");
	return EXIT_SUCCESS;
}