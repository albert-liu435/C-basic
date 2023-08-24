#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1、值传递
void mySwap1101(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	/*cout << ":::a = " << a << endl;
	cout << ":::b = " << b << endl;*/
}

//2、地址传递
void mySwap1102(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3、引用传递
void mySwap1103(int &a, int &b) // int &a = a; int &b = b;
{
	int temp = a;
	a = b;
	b = temp;
}

void test1101()
{
	int a = 10;
	int b = 20;
	//mySwap1101(a, b);
	//mySwap1102(&a, &b);

	mySwap1103(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int& func()
{
	int a = 10;
	return a;
}

//引用注意事项
void test1102()
{
	//1、引用必须引一块合法内存空间
	//int &a = 10;

	//2、不要返回局部变量的引用
	int &ref = func();
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
}

int& func2()
{
	static int a = 10;
	return a;
}

void test1103()
{
	int &ref = func2();
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	//当函数返回值是引用，那么函数的调用可以作为左值
	func2() = 1000;

	cout << "ref = " << ref << endl;


}


int main1101() {
	//test1101();
	//test1102();
	test1103();



	system("pause");
	return EXIT_SUCCESS;
}