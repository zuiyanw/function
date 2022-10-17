#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//题目名称：计算一个数的每位之和（递归实现）
//题目内容：写一个递归函数Digitsum(n),输入一个非负整数，返回组成它的数字之和
//例如，调用Digitsum(1729)，则应该返回1+7+2+9，它的和是19
//输入：1729，输出：19

int Digitsum(int n)
{
	if (n > 9)
	{
		return n % 10 + Digitsum(n / 10);
	}
	else
	{
		return n;
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Digitsum(n);
	printf("%d\n", ret);
	return 0;
}