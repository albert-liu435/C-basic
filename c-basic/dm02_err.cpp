#include<iostream>
using namespace std;//c++�������ռ�
class circle
{
public:
	double r;
	double pi = 3.1415926;
	double area = pi * r*r;
};

// 2010���벻ͨ�� ������2013�������ܱ���ͨ��
int main02()
{
	circle c1;
	cout << "���r" << c1.r;
	cout << "please input your r" << endl;
	cin >> c1.r;

	cout << c1.area << endl;	//����

	system("pause");
	return 0;
}