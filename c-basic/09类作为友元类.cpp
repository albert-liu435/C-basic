#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>
class Buildinga;
class GoodGaya
{
public:

	GoodGaya();

	void visit();

	Buildinga * m_building;
};

class Buildinga
{
	//��goodGay����Ϊ Building�ĺ����ѣ����Է���˽�г�Ա
	friend class GoodGaya;

public:
	Buildinga();

	string m_SittingRoom;

private:
	string m_BedRooma;
};

Buildinga::Buildinga()
{
	this->m_SittingRoom = "����";
	this->m_BedRooma = "����";
}

GoodGaya::GoodGaya()
{
	this->m_building = new Buildinga;
}

void GoodGaya::visit()
{
	cout << "�û������ڷ��ʣ� " << this->m_building->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ� " << this->m_building->m_BedRooma << endl;
}

void test91()
{
	GoodGaya gg;
	gg.visit();
}

int main() {

	test91();

	system("pause");
	return EXIT_SUCCESS;
}