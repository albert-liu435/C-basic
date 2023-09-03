#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyInter
{
	//友元函数，为了访问私有变量
	friend ostream& operator<<(ostream& cout, MyInter& myInt);
public:
	MyInter()
	{
		m_Num = 0;
	}

	//前置++ 重载
	MyInter& operator++()
	{
		this->m_Num++;
		return *this;
	}

	//后置++ 重载
	MyInter operator++(int)
	{
		//先记录初始状态
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