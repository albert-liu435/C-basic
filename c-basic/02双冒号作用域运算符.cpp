#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
//using namespace std;


int atk = 1000;
void test21()
{
	int atk = 2000;
	std::cout << "atk = " << atk << std::endl;
	// ::代表作用域  如果前面什么都不添加 代表全局作用域
	std::cout << "全局 atk = " << ::atk << std::endl;
}


int main0201() {
	test21();


	system("pause");
	return EXIT_SUCCESS;
}