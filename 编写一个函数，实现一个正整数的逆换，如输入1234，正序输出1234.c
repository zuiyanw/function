#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//题目名称：打印一个数的每一位
//题目内容：递归方式实现打印一个整数的每一位 如输入1234，函数返回值为1 2 3 4
void add(int n)
{
	if (n > 9)
	{
		add(n / 10);
		printf("%d ", n % 10);
	}
	else
	{
		printf("%d ", n % 10);//最后一位是个位数 对10取模等于他本身 这里直接写n也可以
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	add(n);
	return 0;
}

