#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//题目名称：求阶乘
//题目内容：递归和非递归分别实现n的阶乘
int fac(int n)
{
	if (n > 1)
	{
		return n*fac(n - 1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret=fac(n);
	printf("%d\n", ret);
	return 0;
}

