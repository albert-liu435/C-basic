#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;  //������˽�����ԣ�������ʲ��������ɱ�������������
};

class Son : public Base
{
public:
	int m_D;
};


void test61()
{
	//4  8    12   16
	cout << "size of  Son = " << sizeof(Son) << endl; // ���Ϊ16

}


int main6() {

	test61();

	system("pause");
	return EXIT_SUCCESS;
}