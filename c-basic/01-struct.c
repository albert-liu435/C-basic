#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct {
	char *name;  //����
	int num;  //ѧ��
	int age;  //����
	char group;  //����С��
	float score;  //�ɼ�
} stu1;


int main0101(void) {

	//���ṹ���Ա��ֵ
	stu1.name = "Tom";
	stu1.num = 12;
	stu1.age = 18;
	stu1.group = 'A';
	stu1.score = 136.5;

	//��ȡ�ṹ���Ա��ֵ
	printf("%s��ѧ����%d��������%d����%c�飬����ĳɼ���%.1f��\n", stu1.name, stu1.num, stu1.age, stu1.group, stu1.score);

	system("pause");
	return EXIT_SUCCESS;
}