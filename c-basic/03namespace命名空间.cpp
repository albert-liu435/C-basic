#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "game1.h"
#include "game2.h"

//1、命名空间用途： 解决名称冲突
void test31()
{
	KingGlory::goAtk();

	LOL::goAtk();
}


//2、命名空间下 可以放  变量、函数、结构体、类...
namespace A
{
	int m_A;
	void func();
	struct Person
	{};
	class Animal
	{};
}

//3、命名空间 必须要声明在全局作用域下
void test32()
{
	//namespace B{}; 不可以命名到局部作用域
}


//4、命名空间可以嵌套命名空间
namespace B
{
	int m_A = 10;
	namespace C
	{
		int m_A = 20;
	}
}
void test33()
{
	cout << "B空间下的m_A = " << B::m_A << endl;
	cout << "C空间下的m_A = " << B::C::m_A << endl;
}

//5、命名空间是开放的，可以随时给命名空间添加新的成员
namespace B
{
	int m_B = 100;
}
void test34()
{
	cout << "B空间下的m_A = " << B::m_A << endl;
	cout << "B空间下的m_B = " << B::m_B << endl;
}

//6、命名空间可以是匿名的
namespace
{
	int m_C = 1000;
	int m_D = 2000;
	//当写的命名空间的匿名的，相当于写了  static int m_C = 1000; static int m_D = 2000;
}

void test35()
{
	cout << "m_C = " << m_C << endl;
	cout << "m_D = " << ::m_D << endl;
}



//7、命名空间可以起别名
namespace veryLongName
{
	int m_E = 10000;
	void func()
	{
		cout << "aaa" << endl;
	}
}



void test36()
{
	namespace veryShortName = veryLongName;
	cout << veryShortName::m_E << endl;
	cout << veryLongName::m_E << endl;

}

int main0301() {
	//test31();
	//test32();
	//test33();
	//test34();
	//test35();
	test36();


	system("pause");
	return EXIT_SUCCESS;
}