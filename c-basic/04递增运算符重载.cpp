#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyInter
{
	//��Ԫ������Ϊ�˷���˽�б���
	friend ostream& operator<<(ostream& cout, MyInter& myInt);
public:
	MyInter()
	{
		m_Num = 0;
	}

	//ǰ��++ ����
	MyInter& operator++()
	{
		this->m_Num++;
		return *this;
	}

	//����++ ����
	MyInter operator++(int)
	{
		//�ȼ�¼��ʼ״̬
		MyInter temp = *this;

		this->m_Num++;

		return temp;
	}

private:
	int m_Num;
};


ostream& operator<<(ostream& cout, MyInter& myInt)
{
	cout << myInt.m_Num;
	return cout;
}

void test41()
{
	MyInter myInt;
	cout << ++(++myInt) << endl;
	cout << myInt << endl;
}

void test42()
{
	MyInter myInt;

	//cout << myInt++ << endl;
	cout << myInt << endl;

}

int main4() {
	test41();
	//test42();


	//int a = 0;
	//cout << ++(++a) << endl;
	//cout << a << endl;

	//int b = 0;
	//cout << (b++)++ << endl;

	system("pause");
	return EXIT_SUCCESS;
}