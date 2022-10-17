#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//题目名称：字符串逆序（递归实现）
//题目内容：编写一个函数 reverse_string(char* string)(递归实现)
//实现：将参数字符串中的字符反向排列
//要求：不能使用c函数库中的字符串操作函数。
int my_strlen(char* str)//这里采用指针 是因为 reverse_string(char str[])中的str[]是首元素地址
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	return 0;
}
void reverse_string(char str[])
{
	int right = 0;
	int left = 0;
	right = my_strlen(str)-1;//-1不要忘了
	while (left < right)
	{
		int tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		right--;
		left++;
	}
}
int main()
{
	char arr[] = "abcdefg";//输出gfedcba
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}