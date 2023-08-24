#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//函数重载条件
//1、在同一个作用域
//2、函数名称相同
//3、参数个数、类型、顺序不同

//class Person
//{
//public:
//	void func()   成员函数 而不是全局函数
//	{
//	}
//};

void func41()
{
	cout << "func41()调用" << endl;
}

void func41(int a)
{
	cout << "func41(int a)调用" << endl;
}

void func41(double a)
{
	cout << "func41(double a)调用" << endl;
}

void func41(int a, double b)
{
	cout << "func41(int a ,double b)调用" << endl;
}

void func41(double a, int b)
{
	cout << "func41(double a, int b)调用" << endl;
}

//返回值可不可以作为函数重载的条件 答案：不可以
//int func(int a, double b)
//{
//	cout << "func(int a ,double b)调用" << endl;
//}



void test41()
{
	func41(1, 3.14);
}



//函数重载中 引用两个版本
//void myFunc(int a)
//{
//	cout << "myfunc(int a )调用" << endl;
//}
void myFunc42(int &a) // int & a  = 10;
{
	cout << "myfunc42(int &a )调用" << endl;
}
void myFunc42(const int &a) // const int &a = 10;
{
	cout << "myfunc42( const int &a )调用" << endl;
}


void test42()
{
	int a = 10;
	//myFunc(a);//需要避免二义性出现

}


//函数重载碰到默认参数  注意避免二义性出现
void func42(int a, int b = 10)
{

}

void func42(int a)
{

}

void test43()
{
	//func2(10); //出现二义性
}


int main04() {
	//test41();
	test42();

	system("pause");
	return EXIT_SUCCESS;
}