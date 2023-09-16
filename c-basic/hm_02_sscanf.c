#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//1��%*s��%*d	��������
void test21()
{
	char * str = "12345abcde";

	char buf[1024] = { 0 };
	sscanf(str, "%*d%s", buf);

	printf("%s\n", buf);

}
void test22()
{
	char * str = "abcde12345"; //���������ո���� \t ������Խ���

	char buf[1024] = { 0 };

	sscanf(str, "%*[a-z]%s", buf);
	//sscanf(str, "%*s%s", buf);

	printf("%s\n", buf);
}

//%[width]s	��ָ����ȵ�����
void test23()
{
	char * str = "12345abcde";

	char buf[1024] = { 0 };

	sscanf(str, "%6s", buf);
	printf("%s\n", buf);
}


//%[a-z]	ƥ��a��z�������ַ�(�����ܶ��ƥ��)
void test24()
{
	char * str = "12345abcdeaaa";

	char buf[1024] = { 0 };

	sscanf(str, "%*d%[a-c]", buf); //ֻҪƥ��ʧ�ܣ���ô�Ͳ�����ƥ����
	printf("%s\n", buf);

}

void test25()
{
	char * str = "12345abcdeaaa";

	char buf[1024] = { 0 };

	sscanf(str, "%[0-9]", buf); //ֻҪƥ��ʧ�ܣ���ô�Ͳ�����ƥ����
	printf("%s\n", buf);
}

//%[aBc]	ƥ��a��B��c��һԱ��̰����
void test26()
{
	char * str = "abcCdef";
	char buf[1024] = { 0 };

	sscanf(str, "%[abC]", buf); //ֻҪƥ��ʧ�ܣ���ô�Ͳ�����ƥ����
	printf("%s\n", buf);
}


//%[^a] 	ƥ���a�������ַ���̰����
void test27()
{
	char * str = "abcCdef";
	char buf[1024] = { 0 };

	sscanf(str, "%[^C]", buf);
	printf("%s\n", buf);

}


//%[^a-z]	��ʾ��ȡ��a-z����������ַ�
void test28()
{
	char * str = "abcCdef123456";
	char buf[1024] = { 0 };

	sscanf(str, "%[^0-9]", buf);
	printf("%s\n", buf);
}


//��ϰ1
void test29()
{
	char * ip = "127.0.0.1";

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;

	sscanf(ip, "%d.%d.%d.%d", &num1, &num2, &num3, &num4);

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);
	printf("%d\n", num4);

}

//��ϰ2
void test210()
{
	char * str = "abcdef#zhangtao@123456";

	char buf[1024] = { 0 };

	sscanf(str, "%*[^#]#%[^@]", buf);

	printf("%s\n", buf);

}

//1.	�Ѹ����ַ���Ϊ: helloworld@itcast.cn,�����ʵ��helloworld�����itcast.cn�����
void test211()
{
	char * str = "helloworld@itcast.cn";

	char buf1[1024] = { 0 };
	char buf2[1024] = { 0 };

	sscanf(str, "%[a-z]%*[@]%s", buf1, buf2);

	printf("%s\n", buf1);
	printf("%s\n", buf2);

}


int main2() {

	test21();
	//test22();
	//test23();
	//test24();
	//test25();
	//test26();
	//test27();
	//test28();
	//test29();
	//test210();
	//test211();
	system("pause");
	return EXIT_SUCCESS;
}