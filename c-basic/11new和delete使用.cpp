#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person���캯������" << endl;
	}

	Person(int a)
	{
		cout << "Person�вι������" << endl;
	}

	~Person()
	{
		cout << "Person������������" << endl;
	}
};

//malloc �� new ����
//malloc �� free ���� �⺯��     new ��delete���� �����
//malloc������ù��캯��   new����ù��캯��
//malloc����void* C++��Ҫǿת     new ���ش����Ķ����ָ��

void test111()
{
	Person * p = new Person;

	delete p;
}

//ע������ ��Ҫ��void*ȥ����new�����Ķ���,����void*�޷�������������
void test112()
{
	void * p = new Person;

	delete p;
}

//����new��������
void test113()
{
	//int * pInt = new int[10];
	//double * pD = new double[10];


	//�����������飬һ�������Ĭ�Ϲ��캯��
	Person * pPerson = new Person[10];

	////�ͷ�����ʱ��  ��Ҫ��[]
	//delete [] pPerson;


	//ջ�Ͽ������飬�ɲ�����û��Ĭ�Ϲ���,����û��Ĭ�Ϲ���
	//Person pArray[10] = { Person(10), Person(20), Person(20) };

}

int main() {
	test111();
	//test112();
	//test113();

	system("pause");
	return EXIT_SUCCESS;
}