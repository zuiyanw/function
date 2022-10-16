#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//题目名称：strlen的模拟
//题目内容：函数实现strlen
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
	int ret =add(arr);//arr为arr[]首元素的地址
	printf("%d\n", ret);
	return 0;
}