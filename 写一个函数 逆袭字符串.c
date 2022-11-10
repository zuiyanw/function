#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //写一个函数 可以逆序一个字符串的内容
#include <stdlib.h>
#include <assert.h>
void reverse(char *str)
{
	assert(str);//断言 确保指针的有效性
	int len = strlen(str);
	char *left = str;
	char *right = str + len - 1;
	while (left<right)//中间没有字符的时候不需要交换 只有一个字符时也不需要交换
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
	
}
int main()
{
	char arr[20] = { 0 };
	//scanf("%s", arr);//abcdef-----fedcba
	gets(arr);//读取一行 代替scanf
	reverse(arr);//逆序函数
	printf("%s\n", arr);
	return 0;
}
