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
	right = my_strlen(str) - 1;//-1不要忘了
	char tmp = str[left];
	str[left] = str[right];// abcdefg  1.a和g位置互换 这里暂时只把g赋值给a  2.'/0'赋值给g之前的位置 3.对bcdef进行反向排列(因为先把'\0'复制到了right的位置 所以f就成为了新的right)
	str[right] = '\0';
	if (my_strlen(str + 1) > 1)//判断条件：只有字符串超过2个或者=2个的时候才需要互换
	{
		reverse_string(str + 1);
	}
		str[right] = tmp;
	
}
int main()
{
	char arr[] = "abcdefg";//输出gfedcba
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}