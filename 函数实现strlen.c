#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��Ŀ���ƣ�strlen��ģ��
//��Ŀ���ݣ�����ʵ��strlen
int add(char * str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
		return count;
}
int main()
{
	char arr[] = {"abcdefg"};
	int ret =add(arr);//arrΪarr[]��Ԫ�صĵ�ַ
	printf("%d\n", ret);
	return 0;
}