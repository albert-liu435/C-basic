#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>
class Buildingb;
class GoodGayb
{
public:

	GoodGayb();

	void visit(); //���Է���Buildingb��˽��

	void visit2(); // �����Է���Buildingb��˽��

	Buildingb * m_Buildingb;
};

class Buildingb
{
	//��GoodGayb���е� visit��Ա������Ϊ��Ԫ
	friend void GoodGayb::visit();
public:
	Buildingb();

	string m_SittingRoom;

private:
	string m_BedRoom;
};

Buildingb::Buildingb()
{
	this->m_SittingRoom = "����";
	this->m_BedRoom = "����";
}

GoodGayb::GoodGayb()
{
	this->m_Buildingb = new Buildingb;
}

void GoodGayb::visit()
{
	cout << "�û������ڷ��ʣ� " << this->m_Buildingb->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ� " << this->m_Buildingb->m_BedRoom << endl;
}

void GoodGayb::visit2()
{
	cout << "�û������ڷ��ʣ� " << this->m_Buildingb->m_SittingRoom << endl;
	//cout << "�û������ڷ��ʣ� " << this->m_Buildingb->m_BedRoom << endl;
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