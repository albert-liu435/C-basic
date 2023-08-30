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
		//析构函数可以进行 堆区 内存释放
		if (m_Name != NULL)
		{
			cout << "Person析构调用" << endl;
			free(m_Name);
			m_Name = NULL;
		}
	}

	char * m_Name; //姓名
	int m_Age;     //年龄
};


void test71()
{

	const char * ch = "德玛西亚";
	char * sh = const_cast<char *>(ch);
	Person1 p(sh, 18);
	cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;

	Person1 p2(p);
	cout << "姓名： " << p2.m_Name << " 年龄： " << p2.m_Age << endl;
}

int main7() {

	test71();

	system("pause");
	return EXIT_SUCCESS;
}