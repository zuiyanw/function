#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��Ŀ���ƣ�strlen��ģ��
//��Ŀ���ݣ��ݹ�ͷǵݹ�ֱ�ʵ��strlen
int add(char * str)
{
	int count = 0;
	if (*str != '\0')
	{
		return 1 + add(str+1);
	}
	else
		return 0;
}
int main()
{
	char arr[] = {"abcdefg"};
	int ret =add(arr);
	printf("%d\n", ret);
	return 0;
}