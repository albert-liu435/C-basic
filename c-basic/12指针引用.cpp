#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

struct Person
{
	int age;
};

void allocateSpace(Person ** p)
{
	//pָ��ָ���ָ��    *p  ָ�� ָ�����person ����   **p  person����
	*p = (Person *)malloc(sizeof(Person));
	(*p)->age = 10;

}

void test1201()
{
	Person * p = NULL;
	allocateSpace(&p);	

	cout << "p.age = " << p->age << endl;
}



void allocateSpace2(Person* &pp) // Person * &pp = p;
{
	pp = (Person *)malloc(sizeof(Person));
	pp->age = 20;
}

void test1202()
{
	Person *p = NULL;
	allocateSpace2(p);
	cout << "p.age = " << p->age << endl;
}

int main() {

	test1201();
	//test1202();
	system("pause");
	return EXIT_SUCCESS;
}