#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//题目名称：打印一个数的每一位
//题目内容：递归方式实现打印一个整数的每一位 编写一个函数，实现一个正整数的逆换，如输入1234，函数返回值为4321.
void add(int n)
{
	if (n > 9)
	{
		printf("%d ", n % 10);
		add(n / 10);
	}
	else
		printf("%d", n);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	add(n);
	return 0;
}