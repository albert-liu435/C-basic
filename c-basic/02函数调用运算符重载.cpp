#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

class MyPrint
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}
};


void MyPrint2(string str)
{
	cout << str << endl;
}

void test21()
{
	MyPrint myPrint;
	myPrint("hello world"); // 仿函数  本质是一个对象   函数对象

	MyPrint2("hello world"); //普通函数
}



class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

void test22()
{
	MyAdd myAdd;
	cout << myAdd(1, 1) << endl;


	cout << MyAdd()(1, 1) << endl; // 匿名函数对象 特点：当前行执行完立即释放
}

int main2() {

	//test21();
	test22();


	system("pause");
	return EXIT_SUCCESS;
}