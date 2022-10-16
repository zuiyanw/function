#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//题目名称：strlen的模拟
//题目内容：递归和非递归分别实现strlen
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