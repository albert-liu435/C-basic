#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//#include <string>
#include "myString.h"


void test31()
{

	const char *abc1 = "abc";
	char *abc;
	abc = (char *)abc1; //////强制转换下，就ok了

	MyString str = abc;

	cout << str << endl;

	cout << "请重新给str赋值：" << endl;

	cin >> str;

	cout << "str 新的值为： " << str << endl;


	MyString str2 = str;

	cout << "str2 = " << str2 << endl;

}

void test32()
{
	const char *abc1 = "abcd";
	char *abc;
	abc = (char *)abc1; //////强制转换下，就ok了

	MyString str = abc;

	MyString str2 = abc;

	str2 = str;

	cout << "str2 = " << str2 << endl;

	cout << "str2[0] = " << str2[0] << endl;

	str2[0] = 'z';

	cout << "str2[0]改为z后输出：  " << str2 << endl;


	const char * ch = "abc";
	char * str3p = const_cast<char *>(ch);


	const char * ch4 = "def";
	char * str4p = const_cast<char *>(ch4);

	MyString str3 = str3p;
	MyString str4 = str4p;
	MyString str5 = str3 + str4;
	MyString str6 = str5 + "ghe";
	cout << "str5 = " << str5 << endl;
	cout << "str6 = " << str6 << endl;


	if (str5 == str6)
	{
		cout << "str5 == str6" << endl;
	}
	else
	{
		cout << "str5 != str6" << endl;
	}

	if (str6 == "abcdefghe")
	{
		cout << "str6 = abcdefghe" << endl;
	}
	else
	{
		cout << "str6 != abcdefghe" << endl;
	}



}


int main3() {
	test31();
	//test32();
	//int a = 10;
	//cin >> a;
	//cout << "a  = " << a << endl;

	system("pause");
	return EXIT_SUCCESS;
}