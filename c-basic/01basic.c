#include <stdio.h>

int main001() {

	int a = 100;
	char str[20] = "c.biancheng.net";
	//%#X��ʾ��ʮ��������ʽ�����������ǰ׺0X��a ��һ�����������������������Ҫ��ǰ���&��������ĵ�ַ��str ����ͱ�ʾ�ַ������׵�ַ������Ҫ��&��
	printf("%#X, %#X\n", &a, str);
	return 0;
}