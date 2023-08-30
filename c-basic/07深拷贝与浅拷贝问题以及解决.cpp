#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person1
{

public:

	Person1(char * name, int age)
	{
		m_Name = (char *)malloc(strlen(name) + 1);

		strcpy(m_Name, name);

		m_Age = age;
	}

	Person1(const Person1&p)
	{
		cout << p.m_Age << endl;
		m_Name = (char*)malloc(strlen(p.m_Name) + 1);
		strcpy(m_Name, p.m_Name);
		
		m_Age = p.m_Age;
	}

	~Person1()
	{
		//�����������Խ��� ���� �ڴ��ͷ�
		if (m_Name != NULL)
		{
			cout << "Person��������" << endl;
			free(m_Name);
			m_Name = NULL;
		}
	}

	char * m_Name; //����
	int m_Age;     //����
};


void test71()
{

	const char * ch = "��������";
	char * sh = const_cast<char *>(ch);
	Person1 p(sh, 18);
	cout << "������ " << p.m_Name << " ���䣺 " << p.m_Age << endl;

	Person1 p2(p);
	cout << "������ " << p2.m_Name << " ���䣺 " << p2.m_Age << endl;
}

int main7() {

	test71();

	system("pause");
	return EXIT_SUCCESS;
}