#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1��ȫ�ֱ��������ǿ  C++�����ض���
int a;
//int a = 10;
//2�����������ǿ ����ֵ��⡢�β����ͼ�⡢�������ò�������
int getRect6S(int w, int h)
{

	return w * h;
}
void test61()
{
	printf("%d\n", getRect6S(10, 10));
}


//3������ת�������ǿ
void test62()
{
	char * p = (char *)malloc(64);
}

//4��struct��ǿ  C++���Էź����������ṹ����������Լ򻯹ؼ��� struct
struct Person
{
	int age;
	void func()
	{
		age++;
	}
};

void test63()
{
	Person p;
	p.age = 17;
	p.func();
	cout << "p��age = " << p.age << endl;
}


//5��bool������չ  C������ û���������  C++��bool����
bool flag = true; // bool���� ����  ��ͼ�   true  ---- ��(1)    false  ---- ��(0)

void test64()
{
	cout << sizeof(bool) << endl; //�����1���ֽ�
	//flag = false;
	//flag = 100; //����0������תΪ1
	cout << flag << endl;
}
//6����Ŀ�������ǿ
void test65()
{
	//?:
	int a = 10;
	int b = 20;

	printf("ret = %d\n", a > b ? a : b);

	(a < b ? a : b) = 100; // C++�·��ص��Ǳ���  b = 100

	printf("a = %d\n", a);
	printf("b = %d\n", b);
}


//7��const��ǿ
//ȫ��const   ��C���Խ���һ��
const int m_A = 100;
void test66()
{
	//m_A = 200;
	//int * p = (int *)&m_A;

	//*p = 200;


	//�ֲ�const
	const int m_B = 100;
	//m_B = 200;
	int * p = (int *)&m_B;
	*p = 200;
	cout << "m_B = " << m_B << endl;

	//int arr[m_B]; //C++��const���εı��� ��Ϊ���� �����Գ�ʼ������

}


int main0601() {
	//test61();
	//test62()
	//test63();
	test64();
	//test05();
	//test06();


	system("pause");
	return EXIT_SUCCESS;
}