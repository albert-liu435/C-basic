#include <stdio.h>

#define MAX 10  //����һ���곣����ֵΪ10
#define STRING "hello world\n" //������һ���ַ�������

int main()
{
	int i = 0;//����һ������������Ϊi��ֵ�ɱ�
	i = 100;
	i = 5;
	//MAX = 200��������ֵ�����޸�

	const int a = 20;//������һ��const������ֵΪ20
	//a = 1;//����ֵ�����޸�
	const char *str = "hello c";
	//a = 0;������ֵ�����޸�
	printf(str);
	return 0;
}