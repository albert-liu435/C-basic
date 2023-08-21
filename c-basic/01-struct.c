#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct {
	char *name;  //姓名
	int num;  //学号
	int age;  //年龄
	char group;  //所在小组
	float score;  //成绩
} stu1;


int main0101(void) {

	//给结构体成员赋值
	stu1.name = "Tom";
	stu1.num = 12;
	stu1.age = 18;
	stu1.group = 'A';
	stu1.score = 136.5;

	//读取结构体成员的值
	printf("%s的学号是%d，年龄是%d，在%c组，今年的成绩是%.1f！\n", stu1.name, stu1.num, stu1.age, stu1.group, stu1.score);

	system("pause");
	return EXIT_SUCCESS;
}