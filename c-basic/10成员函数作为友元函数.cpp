#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>
class Buildingb;
class GoodGayb
{
public:

	GoodGayb();

	void visit(); //可以访问Buildingb的私有

	void visit2(); // 不可以访问Buildingb的私有

	Buildingb * m_Buildingb;
};

class Buildingb
{
	//让GoodGayb类中的 visit成员函数作为友元
	friend void GoodGayb::visit();
public:
	Buildingb();

	string m_SittingRoom;

private:
	string m_BedRoom;
};

Buildingb::Buildingb()
{
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";
}

GoodGayb::GoodGayb()
{
	this->m_Buildingb = new Buildingb;
}

void GoodGayb::visit()
{
	cout << "好基友正在访问： " << this->m_Buildingb->m_SittingRoom << endl;
	cout << "好基友正在访问： " << this->m_Buildingb->m_BedRoom << endl;
}

void GoodGayb::visit2()
{
	cout << "好基友正在访问： " << this->m_Buildingb->m_SittingRoom << endl;
	//cout << "好基友正在访问： " << this->m_Buildingb->m_BedRoom << endl;
}


void test111()
{
	GoodGayb gg;
	gg.visit();
	gg.visit2();
}

int main11() {

	test111();

	system("pause");
	return EXIT_SUCCESS;
}