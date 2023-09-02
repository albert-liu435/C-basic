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
	//让goodGay类作为 Building的好朋友，可以访问私有成员
	friend class GoodGaya;

public:
	Buildinga();

	string m_SittingRoom;

private:
	string m_BedRooma;
};

Buildinga::Buildinga()
{
	this->m_SittingRoom = "客厅";
	this->m_BedRooma = "卧室";
}

GoodGaya::GoodGaya()
{
	this->m_building = new Buildinga;
}

void GoodGaya::visit()
{
	cout << "好基友正在访问： " << this->m_building->m_SittingRoom << endl;
	cout << "好基友正在访问： " << this->m_building->m_BedRooma << endl;
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